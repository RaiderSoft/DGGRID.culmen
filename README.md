# DGGRID

## General Information

DGGRID version 7.0b
released September 1, 2019
Southern Terra Cognita Laboratory
www.discreteglobalgrids.org

DGGRID is a command-line application designed to generate and manipulate 
icosahedral discrete global grids (DGGs).

Two directories should be included herein:

   src: contains complete source code for DGGRID (see README.MAKE for 
     instructions on building the application and source code documenation)

   examples: contains examples of using DGGRID with pre-computed outputs

User documentation for DGGRID is in dggridManualV70.pdf.

## TERMS OF USE

This documentation is part of DGGRID.

DGGRID is free software: you can redistribute it and/or modify it under the terms of the GNU Affero General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

DGGRID is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License for more details.

You should have received a copy of the GNU Affero General Public License along with the DGGRID source code (see the file LICENSE).  If not, see <https://www.gnu.org/licenses/>.

## CREDITS

DGGRID was primarily written in C++ by Kevin Sahr. See the file CHANGELOG.md 
for additional contributors. 

The original DGGRID specifications were developed by (in alphabetical order): 
A. Ross Kiester, Tony Olsen, Barbara Rosenbaum, Kevin Sahr, Ann Whelan, and 
Denis White.

DGGRID was made possible in part by funding from the US Environmental Protection Agency and Culmen International.

DGGRID requires the following external library (not included):

- The Open Source Geospatial Foundation’s GDAL translator library for raster and vector geospatial data formats (see gdal.org)

DGGRID uses the following external libraries (included with the DGGRID source 
code):

- Angus Johnson’s Clipper library; see http://www.angusj.com.

- George Marsaglia’s multiply-with-carry “Mother-of-all-RNGs” pseudo-random number generation function.



