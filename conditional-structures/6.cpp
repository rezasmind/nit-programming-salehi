#include <iostream>
using namespace std;

int main() {
    // program that get a number and print if it is even or odd
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }
}