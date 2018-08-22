#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool check(int a)
{
	if (a == 1)
		return false;
	for (int i = 2;i < a;i++)
	{
		if (a % i== 0)
			return false;
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	int temp;
	int cnt = 0;
	for(int i=0;i<n;i++)
	{
		cin >> temp;
		if (check(temp))
			cnt++;
	}
	cout << cnt;
	return 0;
}