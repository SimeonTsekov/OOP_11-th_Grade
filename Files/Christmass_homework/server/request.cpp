#include "request.h"

Request::Request() : IP(""), route(""), name(""){}

Request::Request(string IP, string route) : IP(IP), route(route), name(""){}

Request::Request(string IP, string route, string name) : IP(IP), route(route), name(name) {}

Request::Request(Request const &r) : IP(r.IP), route(r.route), name(r.name) {}

string Request::get_IP(){
	return IP;
}

string Request::get_route(){
	return route;
}

string Request::get_name(){
	return name;
}
