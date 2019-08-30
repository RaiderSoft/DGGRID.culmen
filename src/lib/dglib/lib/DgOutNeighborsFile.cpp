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
// DgOutPRChildrenFile.cpp: DgOutPRChildrenFile class implementation
//
// Version 7.0 - Kevin Sahr, 12/14/14
//
////////////////////////////////////////////////////////////////////////////////

#include "DgOutPRChildrenFile.h"
#include "DgIDGGBase.h"
#include "DgBoundedIDGG.h"
#include "DgHexIDGG.h"
#include "DgHexIDGGS.h"

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
DgOutPRChildrenFile::DgOutPRChildrenFile (const string& fileName, 
         const string& suffix, DgReportLevel failLevel)
   : DgOutPRNeighborsFile (fileName, suffix, failLevel)
{

} // DgOutPRChildrenFile::DgOutPRChildrenFile

////////////////////////////////////////////////////////////////////////////////
DgOutPRChildrenFile& 
DgOutPRChildrenFile::insert (const DgIDGGBase& dgg, const DgLocation& center,
           DgLocVector& vec)
{
//cout << "@@@@@ DgOutPRChildrenFile::insert:" << endl;
//cout << " dgg: " << dgg << endl;
//cout << " center: " << center << endl;
//cout << " vec: " << vec << endl;
   const DgHexIDGG& hexdgg = static_cast<const DgHexIDGG&>(dgg);
   const DgHexIDGGS& dggs = hexdgg.dggs();
   const DgHexIDGG& dggr = dggs.hexIdgg(dgg.res() + 1);

   unsigned long long int sn = dgg.bndRF().seqNum(center);
   *this << sn;
   for (int i = 0; i < vec.size(); i++)
   {
      DgLocation tmpLoc(vec[i]);
      dggr.convert(&tmpLoc);
      *this << " " << dggr.bndRF().seqNum(tmpLoc);
   }

   *this << endl;

   return *this;

} // DgOutPRChildrenFile::insert

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////