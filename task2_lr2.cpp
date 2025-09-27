#include <iostream>
using namespace std;

int main()
{
    double x, y, z;
    cout << "enter the sides of the triangle: ";
    cin >> x >> y >> z;
    if (x <= 0 || y <= 0 || z <= 0) {
        cout << "no correct";
    }
    else {
        if (x < y + z && y < x + z && z < x + y) {
            cout << "yes";
        }
        else {
            cout << "no";
        }

    }


    return 0;
}