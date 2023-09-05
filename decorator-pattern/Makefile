# Variables

CXX = clang++
CXXFLAGS = -Wall

# Path includes
CURR_DIR = "."

# Files
IMPL_FILES = menu-items/sandwich/sandwich.cc menu-items/muffin/muffin.cc
MAIN = main.cc

all:
	${CXX} ${CXXFLAGS} -std=c++14 -I${CURR_DIR} ${MAIN} ${IMPL_FILES}

clean:
	rm a.out
