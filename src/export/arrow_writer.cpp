#include "fastparsex/export/arrow_writer.hpp"
#include <fstream>

namespace fp {

void ArrowWriter::write(const char* path) {
    // Versione Community: niente Parquet, niente Arrow
    // Scriviamo solo un file vuoto come placeholder
    std::ofstream f(path);
}

} // namespace fp
