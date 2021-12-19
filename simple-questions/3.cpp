#include <iostream>
using namespace std;

int main() {
    // program that get x and y of rectangle and print its area and perimeter
    int x, y;
    cin >> x >> y;
    cout << "Area: " << x * y << endl;
    cout << "Perimeter: " << 2 * (x + y) << endl;
    return 0;
}