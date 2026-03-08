#include "fastparsex/csv/csv_reader.hpp"

namespace fp {

CSVReader::CSVReader(const std::string& path)
    : parser(path) {}

bool CSVReader::read_all() {
    RowView row;
    while (parser.next_row(row)) {
        // In una versione reale potresti processare la row
    }
    return true;
}

} // namespace fp
