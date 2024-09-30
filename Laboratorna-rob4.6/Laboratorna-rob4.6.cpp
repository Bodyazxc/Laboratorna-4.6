#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	double P, S;
	int k, i;
	P = 1;
	i = 1;
	while (i <= 15)

	{
		 S = 0;
		 k = 1;
		while (k <= i)

		{
			S += 1.0 / k;
			k++;

		}
		P *= (pow(sin(i), 2) + pow(cos(i), 2) * S) / pow(i, 2);
		i++;

	}
	cout << P << endl;
	P = 1;
	i = 1;
	do
	{
		S = 0;
		k = 1;
		do
		{
			S +=  1.0 / k;
			k++;
		} while (k <= i);
		P *= (pow(sin(i), 2) + pow(cos(i), 2) * S) / pow(i, 2);
		i++;
	} while (i <= 15);
	cout << P << endl;
	P = 1;
	for (i = 1; i <= 15; i++)

	{
		S = 0;
		for (k = 1; k <= i; k++)

		{
			S += 1.0 / k;

		}
		P *= (pow(sin(i), 2) + pow(cos(i), 2) * S) / pow(i, 2);

	}
	cout << P << endl;
	P = 1;
	for (i = 15; i >= 1; i--)

	{
		S = 0;
		for (k = i; k >= 1; k--)

		{
			S += 1.0 / k;

		}
		P *=( pow(sin(i), 2) + pow(cos(i), 2) * S )/ pow(i, 2);
	}
	
	cout << P << endl;
	return 0;
}
