company: company.o
	g++ -o company company.o employee.o manager.o

company.o: company.cpp employee.h manager.h
	g++ -c company.cpp 

manager.o: manager.h
	g++ -c manager.cpp

employee.o: employee.cpp employee.h
	g++ -c employee.cpp

clean:
	rm *.o
