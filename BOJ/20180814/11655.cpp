//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//int main()
//{
//	string a;
//	getline(cin, a);
//	for (int i = 0;i < a.length();i++)
//	{
//		if (a[i] >= 97 && a[i] <= 122)
//		{
//			int temp = (int)a[i] + 13;
//			if (temp >122)
//			{
//				cout << (char)(temp % 122 + 96);
//			}
//			else
//				cout << (char)temp;
//		}
//		else if (a[i] >= 65 && a[i] <= 90)
//		{
//			int temp = (int)a[i] + 13;
//			if (temp >90)
//			{
//				cout << (char)(temp % 90 + 64);
//			}
//			else
//				cout << (char)temp;
//		}
//		else
//			cout << a[i];
//	}
//	cout << endl;
//	return 0;
//}