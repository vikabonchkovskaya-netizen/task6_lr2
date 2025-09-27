#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, b, D, A, S;
    cout << "Enter x, D: " << endl;
    cin >> x >> D;
    b = x + D;
    if (b == 0)
    {
        cout << "division by zero" << endl;
        return 1;
    }
    A = D*(x/b);
    double del = pow(D, 3) + (A + D - b);
    if (del == 0) 
    {
        cout << "division by zero" << endl;
        return 1;
    }
    S = (A * A + b * cos(x)) / del;
   cout <<S;
    return 0; 
}