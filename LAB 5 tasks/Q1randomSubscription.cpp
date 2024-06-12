#include <iostream>
#include<random>
using namespace std;
int main() {
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<>distrib(0, 11);
int daysUntilExpiration= distrib(gen);
cout<<"Days until expiration is:"<<daysUntilExpiration<<endl;
if(daysUntilExpiration<1)
    cout<<"YOUR SUBSCRIPTION HAS EXPIRED"<<endl;
else if(daysUntilExpiration==1)
    cout<<"YOUR SUBSCRIPTION EXPIRES WITHIN A DAY RENEW NOW AND SAVE 20%!"<<endl;
else if(daysUntilExpiration<=5)
    cout<<"YOUR SUBSCRIPTION EXPIRES IN"<<daysUntilExpiration<< "RENEW NOW AND SAVE 10%"<<endl;
else if(daysUntilExpiration<=10)
    cout<<"YOUR SUBSCRIPTION EXPIRES SOON. RENEW NOW!"<<endl;
else

    cout<<"YOU HAVE AN ACTIVE SUBSCRIPTION"<<endl;
    return 0;
}