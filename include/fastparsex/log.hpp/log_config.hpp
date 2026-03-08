#pragma once

#include <string>

namespace fp {

enum class LogFormat {
    ApacheCommon,
    ApacheCombined,
    Nginx,
    Custom
};

struct LogConfig {
    LogFormat format;
    std::string custom_pattern;

    LogConfig(LogFormat fmt, std::string pattern = "")
        : format(fmt), custom_pattern(std::move(pattern)) {}
};

static LogConfig apache_common() {
    return LogConfig{ LogFormat::ApacheCommon, "" };
}

static LogConfig apache_combined() {
    return LogConfig{ LogFormat::ApacheCombined, "" };
}

static LogConfig nginx() {
    return LogConfig{ LogFormat::Nginx, "" };
}

static LogConfig custom(std::string pattern) {
    return LogConfig{ LogFormat::Custom, std::move(pattern) };
}

} // namespace fp
