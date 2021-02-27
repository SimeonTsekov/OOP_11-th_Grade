#ifndef REQUEST
#define REQUEST

#include <string>
using std::string;

class Request{
	protected:
		string IP;
		string route;
		string name;
	public:
		Request();
		Request(string IP, string route);
		Request(string IP, string route, string name);
		Request(Request const &r);

		string get_IP();
		string get_route();
		string get_name();
};

#endif
