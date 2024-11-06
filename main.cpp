#include <iostream>
#include <fstream>
using namespace std;
void Set_up_new_password() {
    cout<<("what is your password?")<<endl;
    string UserPassword;
    string CheckForSpace = " ";
    getline(cin, UserPassword);
    if (UserPassword.find(CheckForSpace) == string::npos) {
        ofstream UserInfoFile ("C:\\Users\\Admin\\Documents\\code n stuff\\User Info");

        UserInfoFile << UserPassword;
        cout << ("Password has been save") << endl;
    }
    else {
        cout<< ("Invalid Password")<< endl;
    }
}
void Log_In() {
    string UserInputPassword;
    cout << "What is your password"<< endl;
    getline(cin,UserInputPassword);
    ifstream UserInfoFile ("C:\\Users\\Admin\\Documents\\code n stuff\\User Info");
    string PasswordChecked;
    getline(UserInfoFile,PasswordChecked );
    if (UserInputPassword == PasswordChecked) {
    cout << "You have successfully log in"<< endl;
    }
    else {
        cout <<"Wrong password"<< endl;

    }

    }



int main() {
    cout << "Log in Or Sign Up [L/S]" << endl;
    string UserChoice;
getline(cin,UserChoice);
    if (UserChoice == "L") {
        Log_In();
    }
        else if (UserChoice == "S") {
            Set_up_new_password();
        }
    else {
        cout<<"Invalid"<< endl;
    }

}