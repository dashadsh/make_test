Download the single-header version of Catch2 from Catch2 GitHub Releases and place it in the same directory as your source files. Name it catch.hpp.

https://github.com/catchorg/Catch2/releases

Ensure your directory structure looks like this:
.
├── catch.hpp
├── main.cpp
├── math_functions.cpp
├── math_functions.h
├── test_math_functions.cpp
├── Makefile


To build the project, open a terminal in the project directory and run:
make

To run the tests, use:
make test
