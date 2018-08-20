//#define _CRT_SECURE_NO_WARNINGS
//#include <vector>
//#include <algorithm>
//#include <functional>
//#include <string>
//#include <iostream>
//using namespace std;
//struct User
//{
//	string name;
//	int a, b, c;
//		
//};
//bool cmp(const User&u1, const User&u2)
//{
//	if (u1.a!=u2.a)
//	{
//		return u1.a > u2.a;
//	}
//	else
//	{
//		if (u1.b != u2.b)
//		{
//			return u1.b < u2.b;
//		}
//		else
//		{
//			if (u1.c != u2.c)
//			{
//				return u1.c > u2.c;
//			}
//			else
//			{
//				return u1.name < u2.name;
//			}
//		}
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	vector<User> a(n);
//	for (int i = 0;i < n;i++)
//	{
//		cin >> a[i].name >> a[i].a >> a[i].b >> a[i].c;
//	}
//	sort(a.begin(), a.end(), cmp);
//	for (int i = 0;i < n;i++)
//	{
//		printf("%s\n", a[i].name.c_str());
//	}
//	return 0;
//}