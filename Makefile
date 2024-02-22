CC=g++

all: hw03

hw03: hw03.cpp hw03.h hw03tftt.o hw03tttf.o hw03choices.o hw03gettf.o hw03gett.o hw03print.o

hw03tftt.o: hw03tftt.cpp hw03.h
	$(CC) -c hw03tftt.cpp -o hw03tftt.o

hw03tttf.o: hw03tttf.cpp hw03.h
	$(CC) -c hw03tttf.cpp -o hw03tttf.o

hw03choices.o: hw03choices.cpp hw03.h
	$(CC) -c hw03choices.cpp -o hw03choices.o

hw03gettf.o: hw03gettf.cpp hw03.h
	$(CC) -c hw03gettf.cpp -o hw03gettf.o

hw03gett.o: hw03gett.cpp hw03.h
	$(CC) -c hw03gett.cpp -o hw03gett.o

hw03print.o: hw03print.cpp hw03.h
	$(CC) -c hw03print.cpp -o  hw03print.o

clean:
	rm hw03 *.o

tar:
	tar cfv hw03.tar hw03.h hw03.cpp hw03tftt.cpp
	hw03tttf.cpp hw03choices.cpp hw03gettf.cpp hw03gett.cpp hw03print.cpp hw03.scr
