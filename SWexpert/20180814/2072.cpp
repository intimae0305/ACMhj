#include <iostream>
using namespace std;
int main()
{
	int testcase;
	int sum = 0;
	cin >> testcase;
	int** arr = new int*[testcase];
	for (int i = 0;i < testcase;i++)
	{
		arr[i] = new int[10];
	}
	for (int i = 0;i < testcase;i++)
	{
		for (int j = 0;j < 10;j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0;i < testcase;i++)
	{
		for (int j = 0;j < 10;j++)
		{
			if (arr[i][j] % 2 == 1)
			{
				sum += arr[i][j];
			}
		}
		cout << '#' << i + 1 << ' ' << sum << endl;
		sum = 0;
	}
	return 0;
}