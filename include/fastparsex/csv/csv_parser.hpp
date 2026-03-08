#pragma once

#include <string>
#include "fastparsex/csv/config.hpp"
#include "fastparsex/file_reader.hpp"
#include "fastparsex/types.hpp"

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
