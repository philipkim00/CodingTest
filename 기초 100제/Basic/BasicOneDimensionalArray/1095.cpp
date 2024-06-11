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

	int min = a[0];

	for (int i = 0; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	cout << min;

	return 0;
}