#include <iostream>
#include <string>

using namespace std;

int main () {

    int* intPointer = new int;
    string* strPointer = new string;

    cout<<"Enter the value for the integer: ";
    cin>>*intPointer;

    cout<<"Enter the value for the string: ";
    cin>>*strPointer;

    cout<<"the value of the dynamically allocated integer is " << *intPointer << endl;
    cout<<"the value of the dynamically allocated string is " << *strPointer;

    delete intPointer;
    delete strPointer;

    return 0;
}