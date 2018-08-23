#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int m, n;
	cin >> m >> n;
	int *arr=new int[1000001];
	for (int i = 2;i < 1000001;i++)
	{
		arr[i] = 1;
	}
	arr[1] = 0;
	arr[0] = 0;
	for (int i = 2;i <= n;i++)
	{
		for (int j = 2;i*j <= n;j++)
		{
			arr[i*j] = 0;
		}
	}
	for (int i = m;i <= n;i++)
	{
		if (arr[i] == 1)
			cout << i<< ' ';
	}
	return 0;
}