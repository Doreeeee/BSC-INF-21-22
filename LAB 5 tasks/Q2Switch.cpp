#include <iostream>
#include<random>
using namespace std;
int main(){
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<>distrib(0, 11);
int daysUntilExpiration= distrib(gen);

switch(daysUntilExpiration){
case 0:
cout<<"YOUR SUBSCRIPTION HAS EXPIRED"<<endl;
break;
case 1:
 cout<<"YOUR SUBSCRIPTION EXPIRES WITHIN A DAY RENEW NOW AND SAVE 20%!"<<endl;
 break;
case 2:
case 3:
case 4:
case 5:
cout<<"YOUR SUBSCRIPTION EXPIRES IN "<<daysUntilExpiration<< " 'DAYS RENEW NOW AND SAVE 10%"<<endl;
break;
case 6:
case 7:
case 8:
case 9:
case 10:
 cout<<"YOUR SUBSCRIPTION EXPIRES SOON. RENEW NOW!"<<endl;
 break;
default:
 cout<<"YOU HAVE AN ACTIVE SUBSCRIPTION"<<endl;
 return 0;
}
}