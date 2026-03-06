#pragma once
#ifndef SPREADSHEETCELL_H
#define SPREADSHEETCELL_H

#include <string>

class SpreadsheetCell {
public:
    virtual void set(std::string value) = 0;
    virtual std::string getString() const = 0;
};

#endif
