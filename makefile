CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += O3
LDFLAGS = -lboost_date_time

#you can use either {} or () to contain sets of instructions

OBJS = main.o isValidInput.o menuShell.o recursions.o

SRCS = isValidInput.cpp menuShell.cpp main.cpp recursions.cpp

HEADERS = isValidInput.hpp menuShell.hpp recursions.hpp

DOCUMENTS = 

#target: dependencies
#	rules to build

main: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o main

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean: ${OBJS}
	rm -f *.o main 

zip: ${SRCS} ${HEADERS} ${DOCUMENTS}
	lab5_Wellheuser_Phillip.zip ${HEADERS}${SRCS}${DOCUMENTS}

#all: clean 



