#include <iostream>
#include <cmath>

int main()
{
    double A,x,p,B,h,Y,C,D;
    std::cout << "Enter x,p,h,K,C,D" << std::endl;
    std::cin >> x >> P >> K >> C >> D >> h;
    if (K*C*D == 0) {
        std::cout << "division by zero" << std::endl;
        return 1;
    }
    A = x - p;
    B = ln(h);
    Y = 0.78*B +  pow (A,3)/K*C*D ;
    std::cout << Y;
    return 0;
}