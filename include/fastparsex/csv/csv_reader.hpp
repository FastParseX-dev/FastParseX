#pragma once

#include <string>
#include "fastparsex/csv/csv_parser.hpp"

namespace fp {

class CSVReader {
public:
    explicit CSVReader(const std::string& path);
    bool read_all();

private:
    CSVParser parser;
};

} // namespace fp
