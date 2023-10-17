#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	double  S, E;
	int n, k;
	S = 1;
	k = 1;
	while (k <= 10)

	{
		E = 0;
		n = 1;
		while (n <= k)

		{
			E += sin(k * n);
			n++;

		}
		S *= E / k;
		k++;

	}
	cout << S << endl;
	S = 1;
	k = 1;
	do
	{
		E = 0;
		n = 1;
		do
		{
			E += sin(k * n);
			n++;
		} 
		while (n <= k);
		S *= E / k;
		k++;
	} 
	while (k <= 10);
	cout << S << endl;
	S = 1;
	for (k = 1; k <= 10; k++)

	{
		E = 0;
		for (n = 1; n <= k; n++)

		{
			E += sin(k * n);

		}
		S *= E / k;

	}
	cout << S << endl;
	S = 1;
	for (k = 10; k >= 1; k--) 
	{
		E = 0;

		for (n = k; n >= 1; n--)
		{
			E += sin(k * n);
		}
		S *= E / k;
	}
	cout << S << endl;
	return 0;
}