/// @file 类型标识 Array 类的定义。

#include <cassert>
#include <utility>
#include <format>
#include <ranges>

#include "AST/Type/Array.h"
#include "AST/Type/Pointer.h"
#include "AST/Type/Void.h"
#include "utility/Logger.h"

namespace ranges = std::ranges;
namespace views = std::views;

namespace SysYust::AST {
    namespace {
        /**
         * @brief 将两个中 vector 串联
         */
        std::vector<std::size_t> concat(const std::vector<std::size_t> &lhs, const std::vector<std::size_t> &rhs) {
            using std::begin;
            using std::end;
            std::vector<std::size_t> rt(lhs.size() + rhs.size());
            std::copy(begin(lhs), end(lhs), begin(rt));
            std::copy(begin(rhs), end(rhs), begin(rt)+lhs.size());
            return rt;
        }
    }

    Array::Array(const Type &baseTypeArg, std::vector<std::size_t> dimension)
    : _baseType(baseTypeArg)
    , _dimensions(std::move(dimension)) {
        assert(baseTypeArg.type() == TypeId::Int || baseTypeArg.type() == TypeId::Float);
    }

    Array::Array(const Array &baseType, const std::vector<std::size_t>& dimensions)
    : _baseType(baseType._baseType)
    , _dimensions(concat(baseType._dimensions, dimensions)) {

    }

    const Type &Array::baseType() const {
        return _baseType;
    }

    const std::vector<std::size_t> &Array::getDimension() const {
        return _dimensions;
    }

    bool Array::match(const Array &rhs) const {
        return _baseType.match(rhs._baseType) && _dimensions == rhs._dimensions;
    }

    bool Array::match(const Pointer &rhs) const {
        auto &pointedType = rhs.getBase();
        if (pointedType.type() != TypeId::Array) { // 当指向非数组时
            // 当为一阶数组时，如果基类型匹配，为真
            if (getRank() == 1) {
                return pointedType.match(baseType());
            } else {
                return false;
            }
        } else { // 当指向数组时
            // NOLINTNEXTLINE(cppcoreguidelines-pro-type-static-cast-downcast) 经过验证的,所以使用静态转换
            auto &pointedArray = static_cast<const Array&>(pointedType);
            if (!pointedArray.baseType().match(baseType())) { // 基类型不匹配
                return false;
            } else {
                if (getRank() - 1 == pointedArray.getRank() ) {
                    auto &pointedDim = pointedArray.getDimension();
                    return std::equal(pointedDim.begin(), pointedDim.end(), _dimensions.begin());
                } else {
                    return false;
                }
            }
        }
#if 0
        auto &pointed = rhs.getBase();
        if (pointed.type() != TypeId::Array) {
            return pointed.match(getType());
        } else { // 指针指向一个数组类型的情况
            assert(pointed.type() == TypeId::Array);

            // NOLINTNEXTLINE(cppcoreguidelines-pro-type-static-cast-downcast) 经过验证的,所以使用静态转换
            auto &pointedArray = static_cast<const Array&>(pointed);

            // 执行比较
            if (pointedArray.getType().match(getType())) {
                auto &dl = getDimension();
                auto &dr = pointedArray.getDimension();
                // 当数组的维度比指针多1，内层维度全部相等，则为真。
                return std::equal(dr.begin(), dr.end(), dl.begin());
            } else {
                return false; // 基类型不同，直接返回 false。
            }
        }
#endif
    }

    std::size_t Array::getRank() const {
        return _dimensions.size();
    }

    std::size_t Array::getExtent(std::size_t i) const {
        return _dimensions[i];
    }

    std::set<Array> Array::_pool{};

    std::string Array::toString() const noexcept {
        auto rt = baseType().toString();
        for (auto d : getDimension()) {
            rt += std::format("[{}]", d);
        }
        return rt;
    }

    const Type &Array::index(std::size_t layer) const {
        if (layer == 0) {
            return *this;
        } else if (layer == getRank()) {
            return baseType();
        } else if (layer < getRank()) {
            return Array::create(baseType(), {_dimensions.begin(), _dimensions.end()-layer});
        } else {
            LOG_ERROR("The number of index is more than the rank of array");
            return Void_v;
        }
    }

    std::size_t Array::offsetWith(const std::span<std::size_t> &ind) const {
        auto layer = ind.size();
        auto toRef = _dimensions.end()-layer; // 最低层待解引用的数组

        auto blockSize = std::reduce(_dimensions.begin(), toRef, 1ull, std::multiplies{});
        auto indView = ind | views::reverse;
        std::span dimView(toRef, _dimensions.end());
        assert(dimView.size() == indView.size());
        std::size_t index = 0;
        for (int i=0; i<layer; ++i) {
            index += blockSize * indView[i];
            blockSize *= dimView[i];
        }
        return index;
    }

} // AST