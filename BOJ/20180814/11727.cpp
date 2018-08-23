#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int d[1001];
int main()
{
	d[1] = 1;
	d[2] = 3;
	int n;
	scanf("%d", &n);
	for (int i = 3;i <= 1000;i++)
	{
			d[i] = (2 * d[i - 2] + d[i - 1])%10007;
	}
	printf("%d", d[n]);
	return 0;
}