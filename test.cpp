#include "spreadsheet.hpp"
#include "gtest/gtest.h"

#include "testing.hpp"
#include "select.hpp"
#include <iostream>
#include "Select_Contains_test.hpp"
#include "Select_Not_test.hpp"
#include "Select_And_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
