#include <iostream>
using namespace std;

int main() {
    int num = 5;
    double pi = 3.14159265358979323846;
    float radius = 0.0f; // Change the value to your desired radius

    if (radius > 0) {
        float area = pi * radius * radius;
        cout << "Area of circle with radius " << radius << " is: " << area << endl;
    } else {
        cout << "Radius must be greater than 0." << endl;
    }

    return 0;
}
