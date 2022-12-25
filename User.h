#include <string>
#include <iostream>

using namespace std;



class User
{

private:

	string userName;
	string userPassword;

public:

	User(string username, string password);
	User();

	void setPassword(string PW);
	void setUsername(string user);
	void cCredential(User credential);

	string getUserName();
	string getPassword();

};