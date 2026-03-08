#include <fastparsex/fastparsex.hpp>
#include <iostream>

int main() {
    fp::CSVParser parser("data.csv");

    fp::RowView row;
    while (parser.next_row(row)) {
        for (auto& f : row.fields) {
            std::cout << "[" << f << "] ";
        }
        std::cout << "\n";
    }
}
