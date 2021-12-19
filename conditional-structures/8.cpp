#include <iostream>
using namespace std;

int main() {
    // program that get length of three sides of triangle and check if its right triangle or not then if it is right triangle print the area and perimeter
    int a, b, c;
    cout << "Enter the length of three sides of a triangle: ";
    cin >> a >> b >> c;
    if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) {
        cout << "The triangle is a right triangle." << endl;
        cout << "The area of the triangle is " << (a * b * c) / 2 << "." << endl;
        cout << "The perimeter of the triangle is " << a + b + c << "." << endl;
    } else {
        cout << "The triangle is not a right triangle." << endl;
    }
}