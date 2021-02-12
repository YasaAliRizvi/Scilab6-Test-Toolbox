This repository is a test toolbox for Scilab. It requires "thirdparty" directory which can be downloaded as "external-library.zip" file from the page: https://scilab.in/fossee-scilab-toolbox. The "thirdparty" directory contains compiled library for a simple "multiplication" function written in C. After copying the "thirdparty" directory to the toolbox directory, on the scilab console run "exec builder.sce" to build the toolbox and then run "exec loader.sce" to load the toolbox.  Type "help" in the scilab console and browse through the help content of "test_toolbox". The external-library.zip file also contains separate instructions to work with MinGW on Windows OS.

This toolbox overall demonstrates
1. How to add a function defined in C in scilab
2. How to add a function defined in Scilab in Scilab
3. How to write help for the added functions
4. How to create a toolbox out of the above functions.



---------------------------------------------------------------------------------------------
Instructions to compile, build and execute a demo of "transpose" function in SciLab
_____________________________________________________________________________________________
1. If not already executed, run './run.sh' in 'test' directory to create the libraries for transpose function in the thirdparty directory
2. If not built, then build the toolbox in Scilab using 'exec builder.sce'.
3. Load the toolbox in Scilab using 'exec loader.sce'.
4. Execute the "transpose" function in Scilab.
	E.g. : y = transpose([1 2 3; 4 5 6]);
5. See the help section for more information on the "transpose" function in Scilab, using 'help transpose'.
