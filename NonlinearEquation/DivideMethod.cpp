#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
double f(double x)
{
    return 0.1 * pow(x, 2) - x * log(x);
}
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, e, c;
    a = 1.0;
    b = 2.0;
    e = 0.000001;
    c = (a + b) / 2;
    if (f(a) * f(b) < 0)
    {
        while (abs(b - a) > e)
        {
            c = (a + b) / 2;
            if (f(a) * f(c) < 0)
                b = c;
            else
                a = c;
        }
        cout << "Приблизительный корень: " << c << endl;
    }
    else
    {
        cout << "В заданном отрезке корней нет";
    }
    return 0;
}