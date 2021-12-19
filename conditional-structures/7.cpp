#include <iostream>
using namespace std;

int main() {
    // program that get length of three sides of a triangle and print that its a Equilateral or Equivalent of the legs or Various sides
    int a, b, c;
    cout << "Enter the length of three sides of a triangle: ";
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << "The triangle is an Equilateral triangle." << endl;
    } else if (a == b || b == c || a == c) {
        cout << "The triangle is an Equivalent triangle." << endl;
    } else {
        cout << "The triangle is a Various triangle." << endl;
    }
}