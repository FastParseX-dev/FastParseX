#pragma once

#include <string>
#include <functional>
#include <vector>
#include "fastparsex/log/log_config.hpp"

namespace fp {

class LogParser {
public:
    LogParser(const std::string& path, LogConfig config = apache_common());

    // Avvia il parsing del file
    void parse();

    // Callback per ogni record parsato
    void on_record(std::function<void(const std::vector<std::string>&)> cb);

private:
    std::string path_;
    LogConfig config_;
    std::function<void(const std::vector<std::string>&)> callback_;
};

} // namespace fp

