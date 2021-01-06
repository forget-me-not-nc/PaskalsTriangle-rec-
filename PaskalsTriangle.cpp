#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int Factorial(int num);
int Combinations(int n, int k);

int main()
{
	int binomialDegree = 0;

	cout << "Enter binomial degree: ";
	cin >> binomialDegree;

	if (binomialDegree < 0)
	{
		binomialDegree = fabs(binomialDegree);

		cout << "Entered value is negative. Absolute value of ENTERED VALUE is taken...\n";
	}

	for (int rowIndex = 0; rowIndex <= binomialDegree; rowIndex++)
	{
		for (int elementIndex = 0; elementIndex < rowIndex + 1; elementIndex++)
		{
			cout << Combinations(rowIndex, elementIndex) << " ";
		}

		cout << endl;
	}

	return 0;
}

int Factorial(int num)
{
	if (num == 0 || num == 1) return 1;

	return (num * Factorial(num - 1));
}


int Combinations(int n, int m)
{
	return (Factorial(n) / (Factorial(m) * Factorial(n - m)));
}
