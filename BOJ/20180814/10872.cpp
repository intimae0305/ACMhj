#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	if (n == 0)
	{
		printf("%d", 1);
		return 0;
	}
	int temp = n;
	for (int i = 1;i <n;i++)
	{
		temp *= i;
	}
	printf("%d", temp);
	return 0;
}