#include <iostream>
#include <cmath>

int main()
{
    double x, A, B, p, K, Y, C, D;
    std::cout << "Enter x, p, K, C, D" << std::endl;
    std::cin >> x >> p >> K >> C >> D;
    B = exp(K);
    A = x + sin(p);
    if (A == 0 || B == 0) {
    std::cout << "division by zero" << std::endl;
    return 1;
}

    Y = 1 + pow(K, 2) / (2 * A * B) - B + D * C;
    std::cout << Y;
    return 0;
}