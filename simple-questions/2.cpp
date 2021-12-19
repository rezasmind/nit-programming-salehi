#include <iostream>
using namespace std;

int main() {
    // program that get radius of a circle and print its area and perimeter
    float radius, area, perimeter;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    area = 3.14 * radius * radius;
    perimeter = 2 * 3.14 * radius;
    cout << "The area of the circle is: " << area << endl;
    cout << "The perimeter of the circle is: " << perimeter << endl;
    return 0;
}