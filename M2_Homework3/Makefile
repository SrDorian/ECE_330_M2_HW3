all: HeartRates.o main.o
	g++ HeartRates.o main.o -o run

HeartRates.o: HeartRates.cpp HeartRates.hpp
	g++ -c HeartRates.cpp 

main.o: main.cpp HeartRates.hpp
	g++ -c main.cpp

clean:
	rm *.o
	rm run

