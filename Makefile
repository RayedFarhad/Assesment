output: main.o calculate.o store.o
	g++ main.o calculate.o store.o -o output

main.o: main.cpp
	g++ -c main.cpp

calculate.o: calculate.cpp calculate.h
	g++ -c calculate.cpp

store.o: store.cpp store.h
	g++ -c store.cpp
