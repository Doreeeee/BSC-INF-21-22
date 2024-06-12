#include <iostream>

using namespace std;

// Global variable declaration
int g;

int main()
{   // Local varibale declaration 
 int a, b;
 // Actual initialisation
  a = 10;
  b = 20;
  g = a + b;

  cout<<g;
  return 0;
}