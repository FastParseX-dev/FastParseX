#include "fastparsex/csv_parser.hpp"
#include <sstream>

namespace fp {

CSVParser::CSVParser(const std::string& path, CSVConfig cfg)
    : reader(path), config(cfg) {}

bool CSVParser::next_row(RowView& out) {
    out.fields.clear();

    line_buffer.clear();
    while (true) {
        if (!reader.read_chunk()) return false;

        line_buffer.append(reader.data(), reader.size());
        break;
    }

    std::stringstream ss(line_buffer);
    std::string field;

    while (std::getline(ss, field, config.delimiter)) {
        out.fields.push_back(field);
    }

    return true;
}

} // namespace fp
