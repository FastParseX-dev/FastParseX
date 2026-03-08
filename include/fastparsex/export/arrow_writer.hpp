#pragma once

#include <string>

namespace fp {

class ArrowWriter {
public:
    ArrowWriter() = default;
    void write(const char* path);
};

} // namespace fp
