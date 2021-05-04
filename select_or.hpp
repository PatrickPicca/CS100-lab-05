#ifndef _SELECT_OR_HPP__
#define __SELECT_OR_HPP__

#include "select.hpp"
#include <string>
#include <cstring>

using namespace std;


class Select_Or : public Select {

        protected:

                Select* select;
                Select* select1;


        public:
                Select_Or(Select* s1, Select* s2){
                        select = s1;
                        select1 = s2;
                }



                virtual bool select(const Spreadsheet* sheet, int row) const {
                        return select->s1(row, column) || select1->s2(sheet, row);
        }

                
		//return select(sheet->cell_data(row, column)); 
                
};
                
                
#endif












































