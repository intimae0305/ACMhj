#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int d[11];
int main()
{
	int T;
	scanf("%d", &T);
	int n;
	while (T)
	{
		scanf("%d", &n);
		d[1] = 1;
		d[2] = 2;
		d[3] = 4;
		for (int i = 4;i <= n;i++)
		{
			d[i] = d[i - 1] + d[i - 2] + d[i - 3];
		}
		printf("%d\n", d[n]);
		T--;
	}
	return 0;
}