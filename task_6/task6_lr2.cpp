#include <iostream>
#include <cmath>

int main()
{
    double x, A, K, y, C, D, S;
    std::cout << "Enter x, p, K, C" << std::endl;
    std::cin >> x >> y >> K >> C;
    if (C == 0  || K == 0) {
        std::cout << "division by zero" << std::endl;
        return 1;
    }
    A = x + y;
    D = fabs(C - A);
    S = 10.1 + A / C + D / pow(K, 2);
    std::cout << S;
    return 0;
}