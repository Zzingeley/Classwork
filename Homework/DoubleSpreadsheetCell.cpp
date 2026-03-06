#include "DoubleSpreadsheetCell.h"
#include <string>

void DoubleSpreadsheetCell::set(std::string v) {
    value = std::stod(v);
}

std::string DoubleSpreadsheetCell::getString() const {
    return std::to_string(value);
}