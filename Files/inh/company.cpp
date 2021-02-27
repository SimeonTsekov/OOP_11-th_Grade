#include "employee.h"
#include "manager.h"

int main(){
	Employee e = Employee("JoJo", 1);
	Manager m = Manager("Kakyoin", 2, 10000);

	e.print();
	m.print();
}
