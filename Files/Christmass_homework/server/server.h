#ifndef SERVER
#define SERVER

#include "request.h"
#include "response.h"

class Server{
	private:
		static string requests[4];
		Response *temp;
	public:
		Server();

		static string users[2][2];
		
		Response* handle_request(Request *req);

		~Server();
};

#endif
