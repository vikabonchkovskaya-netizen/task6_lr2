#include <iostream>
#include <cmath>

int main()
{
    double A,x,d,B,e,Y,C,K;
    std::cout << "Enter x,e,d,K,C" << std::endl;
    std::cin >> x >> e >> d >> C >> K ;
    if (K == 0) {
        std::cout << "division by zero" << std::endl;
        return 1;
    }
    A = log10(x);
    B = x + pow (e,d);
    Y = (A+B) - pow (C,2)/K ;
    std::cout << Y;
    return 0;
}