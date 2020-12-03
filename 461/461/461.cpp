#include <iostream>

using namespace std;
// sorting function BuBbLe
void funcSort(int *voters, int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++)
		{
			if (voters[j] < voters[i]) {
				int temp = voters[i];
				voters[i] = voters[j];
				voters[j] = temp;
			}
		}
	}
}

int main()
{
	int n, count = 0;
	cin >> n;
	int *voters = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> voters[i];
	}

	funcSort(voters, n);
	n = n / 2 + 1;
	for (int i = 0; i < n; i++)
	{
		count += voters[i] / 2 + 1;
	}
	cout << count;
}