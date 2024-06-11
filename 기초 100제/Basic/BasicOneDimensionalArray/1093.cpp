#include <iostream>
using namespace std;

int main()
{
	int n, t;
	int a[24] = {};
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> t;
		a[t] = a[t] + 1;
	}

	for (int i = 0; i < 23; i++)
	{
		cout << a[i+1] << " ";
	}

	return 0;
}