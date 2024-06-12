#include <iostream>

using namespace std;
// We can have global and a local variable with the same datatype and name but 
// the local one will be the one taking the preference;
// Global variable declaration and initialization
int g = 20;

int main()
{   // Local varibale declaration and initialization
 int g = 10;

  cout<<g;

  return 0;
}