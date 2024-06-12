#include <iostream>

using namespace std;

int main()
{
    // prompting user to enter the required values
    int x;
    int y;
    cout<<"Enter the value of x : "; // type the value of x and press enter
    cin>>x;
    cout<<"Enter the value of y : ";// Type the value of y and press enter.
    cin>>y;
    int sum = x + y;
    cout<<"The sum of "<<x<<" and "<<y<< " = "<<sum;
    return 0;
}