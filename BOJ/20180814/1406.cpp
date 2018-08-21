//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <ctime>
//using namespace std;
//int main()
//{
//	
//	string a;
//	char b;
//	vector<char> left, right;
//	int n;
//	cin >> a >> n;
//	cin.ignore();
//	for (int i = 0;i < a.size();i++)
//	{
//		left.push_back(a[i]);
//	}
//	for (int i = 0;i < n;i++)
//	{
//		cin >> b;
//		if (b == 'L')
//		{
//			if (!left.empty())
//			{
//				right.push_back(left.back());
//				left.pop_back();
//
//			}
//		}
//		else if (b == 'D')
//		{
//			if (!right.empty())
//			{
//
//				left.push_back(right.back());
//				right.pop_back();
//			}
//		}
//		else if (b == 'B')
//		{
//			if(!left.empty())
//				left.pop_back();
//				
//		}
//		else
//		{
//			char temp;
//			cin >> temp;
//			left.push_back(temp);
//		}
//	}
//	for (int i = 0;i < left.size();i++)
//	{
//		cout << left[i];
//	}
//	for (int i = right.size()-1;i >=0;i--)
//	{
//		cout << right[i];
//	}
//	return 0;
//}