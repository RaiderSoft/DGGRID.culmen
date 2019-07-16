/*******************************************************************************
    Copyright (C) 2018 Kevin Sahr

    This file is part of DGGRID.

    DGGRID is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    DGGRID is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*******************************************************************************/
////////////////////////////////////////////////////////////////////////////////
//
// DgOutPRChildrenFile.h: DgOutPRChildrenFile class definitions
//
// Version 7.0 - Kevin Sahr, 12/14/14
//
////////////////////////////////////////////////////////////////////////////////

#ifndef DGOUTPRCHILDREN_H
#define DGOUTPRCHILDREN_H

#include <string>
#include <fstream>

#include "DgUtil.h"
#include "DgOutPRNeighborsFile.h"

using namespace std;

class DgIDGGBase;

////////////////////////////////////////////////////////////////////////////////
class DgOutPRChildrenFile : public DgOutPRNeighborsFile {

   public:

      DgOutPRChildrenFile (const string& fileName, 
                        const string& suffix = string("chd"), 
                        DgReportLevel failLevel = DgBase::Fatal);

      virtual DgOutPRChildrenFile& insert (const DgIDGGBase& dgg, 
                   const DgLocation& center, DgLocVector& vec);
};

inline DgOutPRChildrenFile& operator<< (DgOutPRChildrenFile& file, const char* str)
              { ostream& o = file; o << str; return file; }

inline DgOutPRChildrenFile& operator<< (DgOutPRChildrenFile& file, const string& str)
              { ostream& o = file; o << str; return file; }

inline DgOutPRChildrenFile& operator<< (DgOutPRChildrenFile& file, long double val)
              { ostream& o = file; o << val; return file; }

inline DgOutPRChildrenFile& operator<< (DgOutPRChildrenFile& file, float val)
              { ostream& o = file; o << val; return file; }

inline DgOutPRChildrenFile& operator<< (DgOutPRChildrenFile& file, int val)
              { ostream& o = file; o << val; return file; }

inline DgOutPRChildrenFile& operator<< (DgOutPRChildrenFile& file, unsigned long long val)
              { ostream& o = file; o << val; return file; }

#endif
