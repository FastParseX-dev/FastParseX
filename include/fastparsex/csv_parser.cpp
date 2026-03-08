#pragma once
#include "file_reader.hpp"
#include "config.hpp"
#include "types.hpp"
#include <string>

namespace fp {

class CSVParser {
public:
    CSVParser(const std::string& path, CSVConfig cfg = {});
    bool next_row(RowView& out);

private:
    FileReader reader;
    CSVConfig config;
    std::string line_buffer;
};

} // namespace fp
