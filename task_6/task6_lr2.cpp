#include <iostream>
#include <cmath>

int main()
{
    double x, y, A, B, z, K, T, D, C;
    std::cout << "Enter x, y, z, K, D, C" << std::endl;
    std::cin >> x >> y >> z >> K >> D >> C;
    A = x - y;
    B = sqrt(z);
    if (z < 0) {
        std::cout << "negative value under square root" << std::endl;
        return 1;
    }
    if (K - C * D == 0) {
        std::cout << "division by zero" << std::endl;
        return 1;
    }

    T = cos(x) + pow(A, 2) / (K - C * D) - B;
    std::cout << T;
    return 0;
}