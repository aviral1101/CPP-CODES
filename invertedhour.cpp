#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << "Input " << n << endl;
	cout << endl;
	int p = 2 * n - 1;
	int y = n;
	int i = n;
	for (int k = 0; k <= n; k++)
	{
		for (i = n; i >= y; i--)
			cout << i<<" ";
		for (int o = 0; o < p; o++)
			cout << "  ";
		for (int k = i + 1; k <= n; k++)
			if (k != 0)
				cout << k<<" ";

		p = p - 2; y--;
		cout << endl;
	}
	p = 1;
	y = 0;
	i = n;
	for (int k = 0; k < n; k++)
	{
		for (i = n; i > y; i--)
			cout << i<<" ";
		for (int o = 0; o < p; o++)
			cout << "  ";
		for (int k = i + 1; k <= n; k++)
			cout << k<<" ";

		p = p + 2; y++;
		cout << endl;
	}

}
