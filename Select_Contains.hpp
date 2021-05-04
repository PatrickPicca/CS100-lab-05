#ifndef SELECT_CONTAINS_HPP
#define SELECT_CONTAINS_HPP

#include "select.hpp"

using namespace std;

class Select_Contains : public select_Column {


	Spreadsheet theSheet;
	string* theString;

	public:
		Select_Contains(Spreadsheet* theSheet_, const string& column_, const string& theString_) : selectColumn(theSheet_, column_)) 
		{
			this->theSheet = theSheet_;
			this->theString = theString_;
		}


		
		virtual bool select(const Spreadsheet* spreadsheet, int row)  const 
		{
        		return spreadsheet->cell_data(row, column).find(subString) != std::string::npos;
    		}

    		virtual bool select(const std::string& s) const {
        		return true;
    		}
	
};

#endif
