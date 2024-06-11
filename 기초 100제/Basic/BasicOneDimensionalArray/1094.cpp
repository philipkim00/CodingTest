#include <iostream>
using namespace std;

int main()
{
	int n, k;
	int a[10000] = {};
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> k;
		a[i] = k;
	}

	for (int i = n; i >= 1; i--)
	{
		cout << a[i - 1] << " ";
	}

	return 0;
}