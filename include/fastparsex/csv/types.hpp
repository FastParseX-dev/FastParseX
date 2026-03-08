#pragma once
#include <string_view>
#include <vector>

namespace fp {

using CSVField = std::string_view;

struct CSVRow {
    std::vector<CSVField> fields;
};

} // namespace fp
