#include <iostream>
#include <cmath>

int main()
{
    double A,x,k,B,z,Y,C,D;
    std::cout << "Enter x,z,k,C,D" << std::endl;
    std::cin >> x >> z >> k >> C >> D ;
    if (A == 0) {
        std::cout << "division by zero" << std::endl;
        return 1;
    }
    A = log(x)-k;
    B = sqrt(z);
    Y = pow(D,2)+ pow(C,2)/0.75*A + B ;
    std::cout << Y;
    return 0;
}