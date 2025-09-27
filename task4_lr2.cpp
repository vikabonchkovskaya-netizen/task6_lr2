#include <iostream>
using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;
    if (X == Y) {
        X = 0; Y = 0;
    }
    else {
        if (Y < X) Y = 0;
        else X = 0;
    }
 system("pause");
    double A, B, C, K;
    cin >> A >> B >> C >> K;
    if (A == B || A == C || B == C) cout << "A B C must be different" << endl;
    else {
        double max = A;
        if (B > max) max = B;
        if (C > max) max = C;
        if (A == max) A -= K;
        if (B == max) B -= K;
        if (C == max) C -= K;
    }
    cout << X << " " << Y << " " << A << " " << B << " " << C;

    return 0;
}
