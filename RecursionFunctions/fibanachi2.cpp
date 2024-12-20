#include <iostream>

using namespace std;

int fibonacci(int n, int a = 0, int b = 1)
{
	if (n == 1)
		return a;
	if (n == 2)
		return b;
	return fibonacci(n - 1, b, a + b);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите n ";
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cout << fibonacci(i) << endl;
	return 0;
}