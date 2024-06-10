#include <iostream>
using namespace std;

int main()
{
	long a, r, n;
	cin >> a >> r >> n;

	long sum = a;

	for (int i = 0; i < n - 1; ++i)
	{
		sum *= r;
	}

	cout << sum;

	return 0;
}