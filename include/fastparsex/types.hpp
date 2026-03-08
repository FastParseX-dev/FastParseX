#pragma once
#include <string_view>
#include <vector>

namespace fp {

using StringView = std::string_view;

struct RowView {
    std::vector<StringView> fields;
};

} // namespace fp
