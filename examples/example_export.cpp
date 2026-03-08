#include <fastparsex/export/arrow_writer.hpp>
#include <iostream>

int main() {
    fp::ArrowWriter writer;
    writer.write("output.arrow");

    std::cout << "Export completed\n";
    return 0;
}
