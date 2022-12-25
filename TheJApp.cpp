// TheJApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "User.h"

bool Ccredential(User account );
User createUser();


int main()
{
    
  
    
    cout << "Welcome to the Journal APP " << endl;
   
    User  newUser = createUser();
   

   cout << "Login please "<<endl;
   
   

   Ccredential(newUser);



}


bool Ccredential(User account)
{

    string credential;
    cout << "enter username ";
    cin >> credential;






    while ((credential.compare(account.getUserName())) != 0)
    {
        cout << " not in our files please try again" << endl;
        cout << "enter username ";
        cin >> credential;
    }

    cout << "enter the password for user " << credential <<" : ";
    cin >> credential;

    while ((credential.compare(account.getPassword())) != 0)
    {
        cout << " not in our files please try again" << endl;
        cout << "enter Password ";
        cin >> credential;
    }

    return 1;
}
User createUser() {

    string username;
    string password;
    cout << " create an account Username ";
    cin >> username;

    cout << " create an account password ";
    cin >> password;

    User account;

    account.setUsername(username);

    account.setPassword(password);


    return account;

}