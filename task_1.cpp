#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;

    double t = 23 * x * x;           
    double A = x * (t + 32);         
    double B = 3 * t + 8;           
    double P1 = A + B;               
    double P2 = B - A;              
    cout << P1 << " " << P2 << endl;

    return 0;
}