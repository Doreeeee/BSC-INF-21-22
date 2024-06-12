#include<iostream>
#include<limits>
using namespace std;
int main(){
    int valueinput;
    cout<<"ENTER AN INTEGER BETWEEN 5 AND 10: ";
    while(!(cin>>valueinput)|| valueinput<5 ||valueinput>10){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"INVALID INPUT. PLEASE ENTER AN INTERGER BETWEEN 5 AND 10: ";
    }
    cout<<"YOUR VALUE INPUT " <<valueinput<<" HAS BEEN ACCEPTED "<<endl;
    return 0;
}