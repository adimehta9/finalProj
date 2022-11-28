CXX = g++
CXXFLAGS = -g -std=c++17 -Wall
EXEC = main
OBJECTS = main.o display.o player.o link.o data.o virus.o board.o graphics.o boardObjects.o server.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}