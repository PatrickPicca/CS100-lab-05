#ifndef __SELECT_CONTAINS_TEST_HPP__
#define __SELECT_CONTAINS_TEST_HPP__

#include "gtest/gtest.h"

#include "Select_Contains.hpp"


TEST(SelectContaintsTest, basicContainsTest) {

	Spreadsheet testsheet;
	testsheet.set_column_names({"First", "Last", "Age", "Major"});
	testsheet.add_row({"Bob", "Jones", "30", "business"});
	testsheet.add_row({"Ron", "Otterman", "40", "News"});

	sheet.set_selection(new Select_Contains(&sheet, "Last", "Jones"));

	std::stringstream out;
	testsheet.print_selection(out);
	EXPECT_EQ(out.str(), "Bob Jones 30 business \n");
}

TEST(SelectContaintsTest, ContainsTwoRows) {

	Spreadsheet testsheet;
	testsheet.set_column_names({"First", "Last", "Age", "Major"});
	testsheet.add_row({"Bob", "Jones", "30", "business"});
	testsheet.add_row({"Ron", "Otterman", "40", "News"});
	testsheet.add_row({"Jerry", "Jones", "45", "Soccer"});

	sheet.set_selection(new Select_Contains(&sheet, "Last", "Jones"));

	std::stringstream out;
	testsheet.print_selection(out);
	EXPECT_EQ(out.str(), "Bob Jones 30 business \nJerry Jones 45 Soccer \n");
}

TEST(SelectContaintsTest, ContainsZero) {

	Spreadsheet testsheet;
	testsheet.set_column_names({"First", "Last", "Age", "Major"});
	testsheet.add_row({"Bob", "Jones", "30", "business"});
	testsheet.add_row({"Ron", "Otterman", "40", "News"});

	sheet.set_selection(new Select_Contains(&sheet, "First", "Robert"));
 
	std::stringstream out;
	testsheet.print_selection(out);
	EXPECT_EQ(out.str(), "\n");
}

