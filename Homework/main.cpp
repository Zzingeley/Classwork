#include <iostream>
#include <vector>
#include <memory>

#include "StringSpreadsheetCell.h"
#include "DoubleSpreadsheetCell.h"

using namespace std;

int main() {

    vector<unique_ptr<SpreadsheetCell>> cells;

    cells.push_back(make_unique<StringSpreadsheetCell>());
    cells.push_back(make_unique<DoubleSpreadsheetCell>());
    cells.push_back(make_unique<StringSpreadsheetCell>());

    cells[0]->set("hello");
    cells[1]->set("10");
    cells[2]->set("18");

    cout << "Vector: [";

    for (int i = 0; i < cells.size(); i++) {
        cout << cells[i]->getString();
        if (i < cells.size() - 1)
            cout << ", ";
    }

    cout << "]" << endl;

    return 0;
}