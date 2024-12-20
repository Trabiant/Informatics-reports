#include <iostream>

using namespace std;

int fibonacci(int n)
{
	if (n <= 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}


int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите n ";
	int n;
	cin >> n;
	for (int i = 0; i <= n-1; i++)
	{
		cout << fibonacci(i) << endl;
	}
	return 0;
}