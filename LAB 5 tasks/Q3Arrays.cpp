#include<iostream>
#include<string>
using namespace std;
int main(){
  string Elements[8]={"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
  int numElements=sizeof(Elements[0]);
for (int i=0; i<numElements; i++) {
    string Element=Elements[i];
    if(Element[0]=='B'){
    cout<<Element<<endl;
    }
}
return 0;
}
