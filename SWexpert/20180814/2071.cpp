#include <iostream>
using namespace std;
int main()
{
	int testcase;
	float sum = 0;
	cin >> testcase;
	float **arr = new float*[testcase];
	for (int i = 0;i < testcase;i++)
	{
		arr[i] = new float[10];
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
			sum += arr[i][j];
		}
		cout << '#' << i + 1 << ' ' << (int)(sum / 10 + 0.5) << endl;
		sum = 0;
	}
	return 0;
}