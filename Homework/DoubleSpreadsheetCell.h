#pragma once
#ifndef DOUBLESPREADSHEETCELL_H
#define DOUBLESPREADSHEETCELL_H

#include "SpreadsheetCell.h"

class DoubleSpreadsheetCell : public SpreadsheetCell {
public:
    void set(std::string value);
    std::string getString() const;

private:
    double value;
};

#endif
