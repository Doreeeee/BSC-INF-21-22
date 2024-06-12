#include <iostream>
#include <string>
using namespace std;

int square(int side) {
    int area = side * side;
    return area;
}

int rectangle(int length, int width) {
    int area = length * width;
    return area;
}

double triangle(int base, int height) {
    double area = (base * height) / 2;
    return area;
}

int main() {
    while(true){
    cout << "Select area of shape" << endl;
    cout << "1. Square" << endl << "2. Rectangle" << endl << "3. Triangle" << endl << "4. Quit program" << endl;
    cout << "Enter your selection: "<<endl;

    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the side length of the square: "<<endl;
        int side;
        cin >> side;
        int area = square(side);
        cout << "The area of a square is: " << area << endl;
    } else if (choice == 2) {
        cout << "Enter the length and width of the rectangle: "<<endl;
        int length;
        int width;
        cin >> length;
        cin>> width;
        int area = rectangle(length, width);
        cout << "The area of a rectangle is: " << area << endl;
    } else if (choice == 3) {
        cout << "Enter the base and height of the triangle: "<<endl;
        int base;
        int height;
        cin >> base;
        cin>> height;
        double area = triangle(base, height);
        cout << "The area of a triangle is: " << area << endl;
    } else if (choice == 4) {
        cout << "Exiting the program......" << endl;
        break;
    
    } else {
        cout << "You've entered an invalid input. Please select from the options above." << endl;
    }
  }
    return 0;
}