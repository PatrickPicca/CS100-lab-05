#ifndef __TESTING_HPP_
#define __TESTING_HPP_

#include "gtest/gtest.h"

#include "spreadsheet.cpp"


TEST(Spreadsheet, PrintingTest) {

Spreadsheet testsheet;
testsheet.set_column_names({"First", "Last", "Age", "Major"});
testsheet.add_row({"Amneh", "Alsuqi", "19", "Testing"});
std::stringstream out;
testsheet.print_selection(out);
EXPECT_EQ(out.str(), "Amneh Alsuqi 19 Testing \n");
}

#endif // __TESTING_HPP_






















