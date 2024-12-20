#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
double f(double x)
{
    return 0.1 * pow(x, 2) - x * log(x);
}
double f1(double x)
{
    return (1 / 5) * x - log(x) - 1;
}
double f2(double x)
{
    return 1 / 5 - 1 / x;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, x0, x, e;
    a = 1.0;
    b = 2.0;
    e = 0.0000001;
    if (f(a) * f2(a) > 0)
    {
        x0 = a;
        cout << "a" << endl;
    }
    else
    {
        if (f(b) * f2(b) > 0)
        {
            x0 = b;
            cout << "b" << endl;
        }
        else
        {
            cout << "В заданном отрезке корней нет";
            return 0;
        }
    }
    x = x0 - f(x0) / f1(x0);
    while (abs(x - x0) > e)
    {
        x0 = x;
        cout << x0 << endl;
        x = x0 - f(x0) / f1(x0);
    }
    cout << "Прблизительный корень: " << x;
    return 0;
}