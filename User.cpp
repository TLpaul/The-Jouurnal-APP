#include "User.h"


User::User(string username, string password) {
	userName = username;
	userPassword = password;

}

User::User() {


	userName = "n/a";
	userPassword = "n/a";
}



void User::cCredential(User credential)

{
	string UserCredential;



	if (credential.getUserName().compare("n/a"))	// check credential 
	{
		cout << "Please create a name " << endl;

		cin >> UserCredential;

		credential.setUsername(UserCredential);



		if (credential.getPassword().compare("n/a"))//password certian length 
		{
			cout << "Please create a password " << endl;

			cin >> UserCredential;

			credential.setPassword(UserCredential);
		}

	}


}
void User::setPassword(string PW) {

	userPassword = PW;
}

void User::setUsername(string user) {

	userName = user;
}

string User::getPassword() {

	return userPassword;

}

string User::getUserName() {

	return userName;
}

