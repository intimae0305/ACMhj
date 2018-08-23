#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
long long f(long long n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
		return n * f(n - 1);
}
int main()
{
	long long n, m;
	cin >> n >> m;
	long long midans = 1;
	for (long long i = n;i>n-m;i--)
	{
		midans *= i;
	} 
	midans /= f(m);
	long long cnt = 0;
	while (midans % 10 == 0)
	{
		cnt++;
		midans /= 10;
	}
	cout << cnt;
	return 0;
}