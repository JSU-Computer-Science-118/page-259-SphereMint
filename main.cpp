// Gannon Moore || J00965925 || November 14, 2022
// Page 259 - Quadratic Equation

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // define variables
    int a, b, c;

    cout << "Input: ";
    cin >> a >> b >> c;

    // determine value of discriminant
    double root = pow(b, 2) - (4 * a * c);

    // check if there are roots
    int rootA = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    int rootB = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);

    if (root > 0) { 
        cout << "Output: " << endl << "Two real roots" << endl;
        cout << "- First root " << rootA << endl << "- Second root " << rootB << endl;
    } else if (root < 0) {
        cout << "Output: Complex roots " << endl;
    } else {
        cout << "Output: The single root is " << rootA << endl;
    }

}

