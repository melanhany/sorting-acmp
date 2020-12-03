#include <iostream>

using namespace std;
// function sort that obviously sorts array of integers
void funcSort(int *fansbudget, int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++)
		{
			if (fansbudget[j] < fansbudget[i]) {
				int temp = fansbudget[i];
				fansbudget[i] = fansbudget[j];
				fansbudget[j] = temp;
			}
		}
	}

}

int main()
{
	int n;
	cin >> n;
	int *fansbudget = new int[n];
	double budget;
	
	for (int i = 0; i < n; i++)
	{
		cin >> fansbudget[i];
	}

	funcSort(fansbudget, n);

	cin >> budget;

	for (int i = 0; i < n; i++)
	{
		if (budget < fansbudget[i])
		{
			budget = (budget + fansbudget[i]) / 2;
		}
	}
	printf("%.6f", budget);
}