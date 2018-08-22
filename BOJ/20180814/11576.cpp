#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int jb1, jb2;
	cin >> jb1 >> jb2;
	int jb1Digit;
	cin >> jb1Digit;
	int temp;
	int sum = 0;
	for (int i = 0;i < jb1Digit;i++)
	{
		cin >> temp;
		if(i!=0)
			sum *= jb1;
		sum += temp;
	}
	vector<int> v;
	while (1)
	{
		v.push_back(sum%jb2);
		sum /= jb2;
		if (sum == 0)
			break;
	}
	for (int i = v.size()-1;i >= 0;i--)
	{
		cout << v[i]<<' ';
	}
	return 0;
}