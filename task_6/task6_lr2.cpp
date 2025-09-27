#include <iostream>
#include <cmath>

int main()
{
    double A,x,z,B,p,Y,C,K,D;
    std::cout << "Enter x,z,p,K,C,D" << std::endl;
    std::cin >> x >> z >> p >> C >> K >> D ;
    if (C*D == 0) {
        std::cout << "division by zero" << std::endl;
        return 1;
    }
    A = sin(x)-z;
    B = fabs(p-x);
    Y = pow(A+B,2) - K/C*D ;
    std::cout << Y;
    return 0;
}