g++ tinystr.cpp tinyxml.cpp tinyxmlerror.cpp tinyxmlparser.cpp tinyxml_test.cpp

all: main.o
	g++ main.o -o bin
main.o: main.c
	g++ -I . -c main.c
clean:
	rm -rf *.o