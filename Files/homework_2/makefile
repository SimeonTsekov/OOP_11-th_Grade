main: main.o user.o provider.o item.o clothes.o tech.o order.o store.o
	g++ -o main main.o user.o provider.o item.o clothes.o tech.o order.o store.o

main.o: main.cpp
	g++ -c main.cpp

user.o: user.h user.cpp
	g++ -c user.cpp

provider.o: provider.h provider.cpp
	g++ -c provider.cpp

item.o: item.h item.cpp
	g++ -c item.cpp

clothes.o: clothes.h clothes.cpp
	g++ -c clothes.cpp

tech.o: tech.h tech.cpp
	g++ -c tech.cpp

order.o: order.h order.cpp
	g++ -c order.cpp

store.o: store.h store.cpp
	g++ -c store.cpp

clean:
	rm *.o


