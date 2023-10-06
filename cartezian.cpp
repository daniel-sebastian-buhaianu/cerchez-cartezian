#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "n = "; cin >> n;

	int L[n], E[n], i;

	for (i = 0; i < n; i++)
	{
		cout << "L[" << i << "]: ";
		cin >> L[i];

		E[i] = 1;
	}

	int gata = 0;

	while (!gata)
	{
		// afisam configuratia curenta

		for (i = 0; i < n; i++)
		{
			cout << E[i] << ' ';
		}

		cout << '\n';

		// generam configuratia urmatoare

		for (i = n-1; i >= 0 && E[i] == L[i]; i--)
		{
			E[i] = 1;
		}

		if (i < 0)
		{
			gata = 1;
		}
		else
		{
			E[i]++;
		}
	}

	return 0;
}
