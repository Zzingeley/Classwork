#pragma once
#ifndef STRINGSPREADSHEETCELL_H
#define STRINGSPREADSHEETCELL_H

#include "SpreadsheetCell.h"

class StringSpreadsheetCell : public SpreadsheetCell {
public:
    void set(std::string value);
    std::string getString() const;

private:
    std::string value;
};

#endif