//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//int gcd(int a, int b) 
//{
//	if (b == 0) 
//	{
//		return a;
//	}
//	else
//	{
//		return gcd(b, a%b);
//	}
//
//}	
//int main()
//{
//	int a[101];
//	int T, n;
//	cin >> T;
//	for (int i = 0;i < T;i++)
//	{
//		cin >> n;
//		for (int j = 0;j < n;j++)
//		{
//			cin >> a[j];
//		}
//		long long ans = 0;
//		for (int j = 0;j < n - 1;j++)
//		{
//			for (int k = j + 1;k < n;k++)
//			{
//				ans += gcd(a[j], a[k]);
//			}
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}