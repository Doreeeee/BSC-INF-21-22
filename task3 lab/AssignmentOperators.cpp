#include <iostream>
using namespace std;

main(){
    int a = 21;
    int c ;

    c = a ;
    cout << "line 1 -= Operator, value of c = :" << c <<endl;

    c +=a;
    cout << "line 2 += Operator, value of c = :" << c <<endl;

    c-=a;
    cout << "line 3 - -= Operator, value of c = :" << c <<endl;

    c *=a ;
    cout << "line 4 *= Operator, value of c = :" << c <<endl;

    c /=a ;
    cout << "line 5 /= Operator, value of c = :" << c <<endl;

    c %=a ;
    cout << "line 6 %= Operator, value of c = :" << c <<endl;

    c <<=2 ;
    cout << "line 7 -<<= Operator, value of c = :" << c <<endl;

    c >>=2 ;
    cout << "line 8 ->>= Operator, value of c = :" << c <<endl;

     c &=2 ;
    cout << "line 9 -& = Operator, value of c = :" << c <<endl;

     c ^=2 ;
    cout << "line 10 -^ = Operator, value of c = :" << c <<endl;

     c |=2 ;
    cout << "line 11 -| = Operator, value of c = :" << c <<endl;

    return 0;
    




}