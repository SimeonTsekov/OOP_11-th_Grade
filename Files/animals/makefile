all:
	g++ -c animal.cpp
	g++ -c mammal.cpp
	g++ -c walk.cpp
	g++ -c lion.cpp

main: 
	g++ -o main main.cpp animal.o mammal.o walk.o lion.o

out:
	./main

clean:
	rm *.o
	rm ./main
