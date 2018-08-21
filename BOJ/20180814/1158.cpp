//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <string>
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	queue<int> u;
//	cout << '<';
//	for (int i = 0;i < n;i++)
//	{
//		u.push(i + 1);
//	}
//	while (!u.empty())
//	{
//		for (int i = 0;i < m-1;i++)
//		{
//			u.push(u.front());
//			u.pop();
//		}
//		cout << u.front();
//		u.pop();
//		if (!u.empty)
//		{
//			cout << ", ";
//		}
//	}
//	cout << '>';
//	return 0;
//}