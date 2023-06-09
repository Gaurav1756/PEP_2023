#include<iostream>
using namespace std;
int main() {
    string firstname, lastname, fullname;
    cout<<"Enter your firstname : ";
    cin>>firstname;
    cout<<"Enter your lastname : ";
    cin>>lastname;
    fullname = firstname + " " + lastname;
    cout<<"Name : "<<fullname;
}