#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	vector<char> v(n);
	string a;
	string temp, temp1;
	string first, second;
	cin >> a;
	while (a.length() > 1)
	{
		first = a.substr(a.length() - 1);
		second = a.substr(a.length() - 2,1);
		temp = first + second;
		if (first == second)
		{
			a = a.substr(0,a.length()-1);
			continue;
		}
		else if (temp=="AG"||temp=="GA")
		{
			a = a.substr(0, a.length() - 2)+"C";
		}
		else if (temp == "AC" || temp == "CA")
		{
			a = a.substr(0, a.length() - 2) + "A";
		}
		else if (temp == "AT" || temp == "TA")
		{
			a = a.substr(0, a.length() - 2) + "G";
		}
		else if (temp == "CG" || temp == "GC")
		{
			a = a.substr(0, a.length() - 2) + "T";
		}
		else if (temp == "TG" || temp == "GT")
		{
			a = a.substr(0, a.length() - 2) + "A";
		}
		else if (temp == "CT" || temp == "TC")
		{
			a = a.substr(0, a.length() - 2) + "G";
		}
	}
	cout << a;
	return 0;
}