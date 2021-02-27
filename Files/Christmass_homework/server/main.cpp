#include "server.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main(){
	Server s;
	Request req("", "/login.html");

	Response *r = s.handle_request(&req);
	
	cout << r->get_message() << " " << r->get_status() << endl;

	Request req1("", "/api/login", "Dio");

	r = s.handle_request(&req1);
	
	cout << r->get_message() << " " << r->get_status() << endl;

	Request req2("", "/api/get_users");

	r = s.handle_request(&req2);
	
	cout << r->get_message() << " " << r->get_status() << endl;

	return 0;
}
