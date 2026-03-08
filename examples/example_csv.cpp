#include <fastparsex/csv/csv_parser.hpp>
#include <iostream>

int main() {
    fp::CSVParser parser("sample.csv");
    fp::RowView row;

    while (parser.next_row(row)) {
        std::cout << "Row: ";
        for (auto& field : row.fields) {
            std::cout << "[" << field << "] ";
        }
        std::cout << "\n";
    }

    return 0;
}
