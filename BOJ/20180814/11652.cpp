//#define _CRT_SECURE_NO_WARININGS
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	vector<long long> a(n);
//	for (int i = 0;i < n;i++)
//	{
//		cin >> a[i];
//	}
//	sort(a.begin(), a.end());
//	int count = 1;
//	int ans_count = 1;
//	long long ans = a[0];
//	for (int i = 1;i < n;i++)
//	{
//		if (a[i] == a[i - 1])
//		{
//			count++;
//		}
//		else
//			count = 1;
//		if (count > ans_count)
//		{
//			ans_count = count;
//			ans = a[i];
//		}
//	}
//	cout << ans;
//}