#include <iostream>

int main()
{
    int X, Y;
    std::cin >> X >> Y;
    if (X == Y) std::cout << "RAVNI";
    else {
        int max=(X > Y) ? X : Y;
        std::cout << max;
    }
    return 0;
}