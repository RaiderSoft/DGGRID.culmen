DGGRID Unix Make Instructions
=============================

These instructions assume you are on a Unix/Linux system.

**1. Go into the DGGRID source directory, DGGRID/src.

**2. Some basic Make settings are given in the text file src/MakeIncludes, 
and are used by the Makefiles in the sub-directories. Edit this file if you
want to add or remove build flags.

In particular, set GDAL_HDR_LIB to the location of the gdal header files
and GDAL_LIB to the gdal library file you want to link to DGGRID.

**3. Build the application dggrid by executing: 

   make

**4. If/when the make is successful there will be a command line 
executable file "dggrid" in the directory DGGRID/src/apps/dggrid. 
This is the DGGRID program. Assuming dggrid is in your command search 
path you may execute it with:

dggrid someMetaFileName.meta

See the DGGRID documentation and examples for details of metafile contents.

**5. Step 3 also builds the sample application DGGRID/src/apps/appex/appex, 
which is intended as a simple demonstration of using calls to the dglib 
library to manipulate DGG cells in source code.

If you have any questions please contact Kevin Sahr at sahrk@sou.edu.
