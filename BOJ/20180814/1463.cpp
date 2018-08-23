#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int d[1000001];
int main()
{
	d[1] = 0;
	for (int i = 2;i <= 1000000;i++)
	{
		
		if (i % 2 == 0 && i % 3 == 0)
			d[i] = min(min(d[i - 1], d[i / 2]), d[i / 3]) + 1;
		else if (i % 2 == 0)
			d[i] = min(d[i - 1], d[i / 2]) + 1;
		else if (i % 3 == 0)
			d[i] = min(d[i - 1], d[i / 3]) + 1;
		else
			d[i] = d[i - 1] + 1;
	}
	int n;
	cin >> n;
	cout<<d[n];
	return 0;
}