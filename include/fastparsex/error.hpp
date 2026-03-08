#pragma once
#include <string>

namespace fp {

enum class ErrorCode {
    None,
    FileNotFound,
    IOError,
    ParseError
};

struct ParseError {
    ErrorCode code = ErrorCode::None;
    std::string message;
};

} // namespace fp
