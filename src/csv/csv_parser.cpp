#include "fastparsex/csv/csv_parser.hpp"
#include <sstream>

namespace fp {

CSVParser::CSVParser(const std::string& path, CSVConfig cfg)
    : reader(path), config(cfg) {}

bool CSVParser::next_row(RowView& out) {
    if (!reader.read_chunk())
        return false;

    line_buffer.assign(reader.data(), reader.size());

    out.fields.clear();
    std::string field;
    bool in_quotes = false;

    for (char c : line_buffer) {
        if (c == config.quote_char) {
            in_quotes = !in_quotes;
        } else if (c == config.delimiter && !in_quotes) {
            out.fields.push_back(field);
            field.clear();
        } else {
            field.push_back(c);
        }
    }

    if (!field.empty())
        out.fields.push_back(field);

    return true;
}

} // namespace fp
