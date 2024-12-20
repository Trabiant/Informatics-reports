#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

double recursion(int n, int x)
{
	if (n == 0)
	{
		return 1;
	}
	return cos(n*x) / factorial(n) + recursion(n - 1, x);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "¬введите n и x" << endl;
	int n, x;
	cin >> n >> x;
	double s = recursion(n, x);
	cout << "–езультат " << s;
	return 0;
}