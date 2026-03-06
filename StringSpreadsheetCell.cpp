#include "StringSpreadsheetCell.h"

void StringSpreadsheetCell::set(std::string v) {
    value = v;
}

std::string StringSpreadsheetCell::getString() const {
    return value;
}