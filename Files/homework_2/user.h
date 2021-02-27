#ifndef USER_H
#define USER_H

#include <string>
using std::string;

class User{
	protected:
		int id;
		string username;
		string password;
	public:
		User();
		User(int id, 
			string name, 
			string password);
		User(User const &u);
	
		int get_ID() const;	
		bool operator==(User *u);
};

#endif
