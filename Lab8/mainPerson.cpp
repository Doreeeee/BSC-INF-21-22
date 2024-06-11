#include <iostream>
#include "Person.h"

using namespace std;

int main ()
{
    Person Jane = Person("Jane", 60.0f);
    Person John = Person("John", 75.0f);

    float totalWeight = Jane + John;

    if (Jane == John) {
	cout << "this the same person" << endl;
    }

    if (Jane != John) {
	cout << "this is not the same person" << endl;
    }
    
    if (Jane == John) {
	cout << "jane is younger than john" << endl;
    }

    if (Jane != John) {
	cout << "john is older than jane" << endl;
    }

    cout << "total weight: " << totalWeight << endl;
    return 0;
}