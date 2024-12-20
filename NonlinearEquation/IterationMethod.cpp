#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
double fi(double x)
{
    const double e = 2.718281828459045;
    return pow(e, 0.1 * x);
}
int main()
{
    setlocale(LC_ALL, "RU");
    double x0, eps, x;
    x0 = 1.5;
    eps = 0.000001;
    x = fi(x0);
    while (abs(x - x0) > eps)
    {
        x0 = x;
        x = fi(x0);
    }
    cout << "Приблизительный корень: " << x << endl;
    return 0;
}
