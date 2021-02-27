main: main.o stack.o
	g++ -g main.o stack.o -o stack

main.o: main.cpp
	g++ -g -c main.cpp

stack.o: stack.h
	g++ -g -c stack.cpp

clean:
	rm *.o
