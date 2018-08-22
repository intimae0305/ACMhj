#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	string a;
	long long q;
	long long r;
	vector<long long> v;
	cin >> a;

	for (int i = a.size() - 1;i >= 0;i--)
	{
		q = (long long)(a[i] - '0');

		if (a[i] >= '4')
		{
			for (int j = 0;j < 3;j++)
			{
				r = q % 2;
				v.push_back(r);
				q /= 2;
			}
		}
		else if (a[i] < '4'&&a[i]>='2')
		{
			for (int j = 0;j < 2;j++)
			{
				r = q % 2;
				v.push_back(r);
				q /= 2;
			}
			if (i != 0)
			{
				v.push_back(0);
			}
		}
		else if (a[i] == '1')
		{
			for (int j = 0;j < 1;j++)
			{
				r = q % 2;
				v.push_back(r);
				q /= 2;
			}
			if (i != 0)
			{
				v.push_back(0);
				v.push_back(0);
			}
		}
		else
		{
			if (i != 0)
			{
				v.push_back(0);
				v.push_back(0);
				v.push_back(0);
			}
		}

	}
	for (int i = v.size() - 1;i >= 0;i--)
	{
		cout << v[i];
	}
	if (a == "0")
	{
		cout << 0;
	}
	return 0;
}