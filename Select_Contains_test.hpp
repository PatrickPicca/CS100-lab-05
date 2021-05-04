#ifndef __SELECT_CONTAINS_TEST_HPP__
#define __SELECT_CONTAINS_TEST_HPP__

#include "gtest/gtest.h"

#include "Select_Contains.hpp"


TEST(SelectContaintsTest, basicContainsTest) {

	Spreadsheet testsheet;
	testsheet.set_column_name({"First", "Last", "Age", "Major"});
	testsheet.add_row({"Bob", "Jones", "30", "business"});
	testsheet.add_row({"Ron", "Otterman", "40", "News"});

	sheet.set_selection(new Select_Contains(&sheet, "Last", "Jones"));

	std::stringstream out;
	testsheet.print_seleciton(out);
	EXPECT_EQ(out.str(), "Bob Jones 30 business");
}
