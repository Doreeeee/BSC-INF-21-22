#include "Box.h"
#include <iostream>

using namespace std;

int main()
{
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;

    Box1.SetLength(12.0);
    Box1.SetHeight(13.0);
    Box1.SetBreadth(10.0);

    volume = Box1.GetVolume();
    cout << "volume of Box2 : " << volume << endl;

    Box3 = Box1 + Box2;

    volume = Box3.GetVolume();
    cout << "volume of Box3 : " << volume << endl;

    return 0;

}