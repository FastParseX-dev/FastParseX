#include "fastparsex/log/log_parser.hpp"
#include "fastparsex/log/log_reader.hpp"
#include <cctype>

namespace fp {

LogParser::LogParser(const std::string& path, LogConfig config)
    : path_(path), config_(std::move(config)) {}

void LogParser::on_record(std::function<void(const std::vector<std::string>&)> cb) {
    callback_ = std::move(cb);
}

void LogParser::parse() {
    LogReader reader(path_);
    std::string line;

    while (reader.next_line(line)) {
        std::vector<std::string> fields;
        std::string current;

        for (const char* cur = line.c_str(); *cur; ++cur) {
            unsigned char c = static_cast<unsigned char>(*cur);
            if (std::isspace(c)) {
                if (!current.empty()) {
                    fields.push_back(current);
                    current.clear();
                }
            } else {
                current.push_back(*cur);
            }
        }

        if (!current.empty())
            fields.push_back(current);

        if (callback_)
            callback_(fields);
    }
}

} // namespace fp
