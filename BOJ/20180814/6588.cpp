#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[1000001];
int main()
{
	for (int i = 2;i < 1000001;i++)
	{
		arr[i] = 1;
	}
	for (int i = 2;i < 1000001;i++)
	{
		for (long long j = 2;i*j <= 1000001;j++)
		{
			arr[i*j] = 0;
		}
	}
	int tc;
	while (scanf("%d", &tc) && tc)
	{
		for (int i = 3;i<= tc/2;i += 2)
		{
			if (arr[i] && arr[tc - i])
			{
				printf("%d = %d + %d\n", tc, i, tc - i);
				break;
			}
		}

	}
	return 0;
}