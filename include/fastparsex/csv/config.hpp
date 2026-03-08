#pragma once

namespace fp {

struct CSVConfig {
    char delimiter = ',';
    char quote_char = '"';
    bool has_header = true;
};

} // namespace fp
