// Gannon Moore || J00965925 || November 14, 2022
// Page 259 - Quadratic Equation

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // define variables
    int a, b, c;

    cin >> a >> b >> c;

    // determine value of discriminant
    double root = pow(b, 2) - (4 * a * c);

    // check if there are roots
    double rootA = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    double rootB = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);

    if (a == 0) {
        cout << "Invalid entry" << endl;
    } else if (root > 0) { 
        cout << "Two real roots" << endl;
        cout << "- First root " << rootA << endl << "- Second root " << rootB << endl;
    } else if (root < 0) {
        cout << "Complex roots " << endl;
    } else {
        cout << "The single root is " << rootA << endl;
    }

}

