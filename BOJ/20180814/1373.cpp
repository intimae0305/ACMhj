//#include <iostream>
//#include <vector>
//#include <vector>
//#include <string>
//using namespace std;
//int main()
//{
//	string a;
//	int cnt = 0;
//	int mid_sum = 0;
//	int mul_num = 1;
//	vector<int> v;
//	cin >> a;
//	for (int i = a.size() - 1;i >= 0;i--)
//	{
//		if (cnt == 3)
//		{
//			v.push_back(mid_sum);
//			mid_sum = 0;
//			cnt = 0;
//			mul_num = 1;
//		}
//		mid_sum += mul_num * (int)(a[i] - '0');
//		mul_num *= 2;
//		cnt++;
//	}
//	v.push_back(mid_sum);
//	for (int i = v.size()-1;i>=0;i--)
//	{
//		cout << v[i];
//	}
//	return 0;
//}