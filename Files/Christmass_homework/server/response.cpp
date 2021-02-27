#include "response.h"

Response::Response() : message(""), status(0) {}

Response::Response(string message, int status) : message(message), status(status) {}

Response::Response(Response const &r) : message(r.message), status(r.status) {}

string Response::get_message(){
	return message;
}

int Response::get_status(){
	return status;
}

void Response::set_message(string message){
	this->message = message;
}

void Response::set_status(int status){
	this->status = status;
}
