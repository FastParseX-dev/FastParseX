#pragma once

#include <string>
#include <string_view>

namespace fastparsex::core {

enum class error_code {
    ok = 0,
    io_error,
    invalid_argument,
    out_of_range,
    parse_error,
    eof,
    unknown
};

class error {
public:
    error() noexcept : code_(error_code::ok) {}
    error(error_code code, std::string message = {})
        : code_(code), message_(std::move(message)) {}

    [[nodiscard]] bool ok() const noexcept { return code_ == error_code::ok; }
    [[nodiscard]] explicit operator bool() const noexcept { return ok(); }

    [[nodiscard]] error_code code() const noexcept { return code_; }
    [[nodiscard]] std::string_view message() const noexcept { return message_; }

    static error success() noexcept { return {}; }

private:
    error_code code_;
    std::string message_;
};

} 
