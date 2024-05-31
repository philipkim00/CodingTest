#include <iostream>
using namespace std;

int main()
{
	int i;
	cin >> i;

	int i2 = 0;

	while (true)
	{
		if (i < i2)
		{
			break;
		}

		cout << i2++ << endl;
	}

	return 0;
}