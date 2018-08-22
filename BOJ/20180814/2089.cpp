#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void getQ(long long a,long long& p,long long& q)
{
	int cnt = 0;
	if (a > 0)
	{
		while (a>0)
		{
			a -= 2;
			cnt--;
		}
		if (a != 0)
		{
			a+=2;
			cnt++;
		}
	}
	else if (a < 0)
	{
		while (a < 0)
		{
			a += 2;
			cnt++;
		}
	}
	p = cnt;
	q = a;
}
int main()
{
	long long a;
	long long p, q;
	vector<long long> v;
	cin>>a;
	while (1)
	{
		getQ(a, p, q);
		v.push_back(q);
		a = p;
		if (p == 0)
			break;
	}
	for (int i = v.size()-1;i>=0;i--)
	{
		cout << v[i];
	}
	return 0;
}