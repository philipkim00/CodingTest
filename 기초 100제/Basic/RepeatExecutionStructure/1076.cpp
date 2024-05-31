#include <iostream>
using namespace std;

int main()
{
	char c;
	cin >> c;

	char a = 'a';

	while (true)
	{
		if (a > c)
		{
			break;
		}

		cout << a++ << " ";
	}

	return 0;
}