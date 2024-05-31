#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;

	int sum = 0;
	for (int i = 0; i < 1000; i++)
	{
		sum += i;

		if (a <= sum)
		{
			cout << i;
			break;
		}
	}
	return 0;
}