#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int d[1001];
int main()
{
	int n;
	scanf("%d", &n);
	d[1] = 1;
	d[2] = 2;
	for (int i = 3;i <=n;i++)
	{
		d[i] =(d[i - 2] + d[i - 1])%10007;
	}
	printf("%d",d[n]);
	return 0;
}