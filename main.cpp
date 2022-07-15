//Correct login is admin
//Correct password is applepie
#include <iostream>

using namespace std;

string login, password;

int main()
{
    cout << "This program is to verify login and password"
            "\nThe correct login is admin"
            "\nThe correct password is applepie"
            "\n\n Type in login:"<< endl;
    cin>>login;
    cout <<"\nType in password:"<< endl;
    cin>>password;

    if((login=="admin")&&(password=="applepie"))
    {
        cout<<"\nYou logged in successfully";
    }
    else
    {
        cout<<"You did not log in";
    }

    cout << "\nPress any key to exit";
    getchar();
    getchar();

    return 0;
}
