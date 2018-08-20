#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	int c;
	string a;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> a;
		for (int i = 0;i < a.size();i++)
		{
			if (a[i] == '(')
				c++;
			else
				c--;
			if (c < 0)
				break;
		}
		if (c == 0)
			cout << "YES" << endl;
		else
			cout << "NO'" << endl;
	}
	return 0;
}