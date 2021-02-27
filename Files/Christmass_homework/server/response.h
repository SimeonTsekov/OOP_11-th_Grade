#ifndef RESPONSE
#define RESPONSE

#include <string>
using std::string;

class Response{
	protected:
		string message;
		int status;
	public:
		Response();
		Response(string message, int status);
		Response(Response const &r);

		string get_message();
		int get_status();

		void set_message(string message);
		void set_status(int status);

};

#endif
