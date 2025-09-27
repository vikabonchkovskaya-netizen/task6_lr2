#include <iostream>
using namespace std;

int main()
{
    double b1;
    cout << "enter b1: ";
    cin >> b1;
    float q = 1.0f / 11;
    double sum = b1 / (1 - q);
    cout << sum;

    return 0;
}
