#include <iostream>
#include <cmath>

int main()
{
    double x, p, C, D, n, K, B, Q;
    std::cout << "Enter x, p, n, K, D" << std::endl;
    std::cin >> x >> p >> n >> K >> D;
    B = cos(x);
    C = p - n;
    if (K * D == 0) {
        std::cout << "division by zero" << std::endl;
        return 1;
    }

    Q = pow(B, 2) / (K * D) + B * pow(C, 3);
    std::cout << Q;
    return 0;
}
