#include "server.h"

Server::Server() {}

string Server::users[2][2] = {{"JoJo", "DioIsGay"}, {"Dio", "JoJoIsGay"}};
string Server::requests[4] = {"/login.html", "/home.html", "/api/login", "/api/get_users"};

Response* Server::handle_request(Request *req){
	temp = new Response;
		
	if(req->get_route()==requests[0]){
		temp->set_message("<html>login</html>");
		temp->set_status(200);
	} else if(req->get_route()==requests[1]){
		temp->set_message("<html>home</html>");
		temp->set_status(200);
	} else if(req->get_route()==requests[2]){
		for(int i=0; users[i]!=NULL; i++){
			if(req->get_name()==users[i][0]){
				temp->set_message("OK");
				temp->set_status(200);
				return temp;
			}
		}

		temp->set_message("Unaouthorized");
		temp->set_status(200);
	} else if(req->get_route()==requests[3]){
		string t = "[";
		
		for(int i=0; i<2; i++){
			t = t +  "\"";
			t = t + users[i][0];
			t = t + "\"";
			if(i==1){
				t = t + "]";
			} else {
				t = t + ", ";
			}
		}

		temp->set_message(t);
		temp->set_status(220);
	} else {
		temp = NULL;
	}


	return temp;
}

Server::~Server(){
	delete temp;
}	

