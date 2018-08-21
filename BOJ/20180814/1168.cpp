//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//int main()
//{
//	ios::sync_with_stdio(false);
//	int n;
//	int m;
//	int k = 0;
//	cin >> n>>m;
//	vector<int> a(n);
//	for (int i = 0;i < n;i++)
//	{
//		a[i] = i + 1;
//	}
//	cout << '<';
//	while (!a.empty())
//	{
//		k = (k + m - 1) % a.size();
//		cout << a[k];
//		a.erase(a.begin() + k);
//		if (!a.empty())
//			cout << ", ";
//	}
//	cout << '>';
//	return 0;
//}