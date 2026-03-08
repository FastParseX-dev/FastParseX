#include <fastparsex/binary/binary_reader.hpp>
#include <iostream>

int main() {
    fp::BinaryReader reader("sample.bin");
    std::vector<char> data;

    if (!reader.read_all(data)) {
        std::cerr << "Failed to read file\n";
        return 1;
    }

    std::cout << "Read " << data.size() << " bytes\n";
    return 0;
}
