	//#include <iostream>
	//#include <string>
	//#include <vector>
	//using namespace std;
	//int main()
	//{
	//	int c[10001];
	//	int top = -1;
	//	int bot = -1;
	//	int n;
	//	cin >> n;
	//	cin.ignore();
	//	string a;
	//	for (int i = 0;i < n;i++)
	//	{
	//		getline(cin, a);
	//		if (a.find("push")!=string::npos)
	//		{
	//			c[++top] = atoi(a.substr(5).c_str());
	//		}
	//		else if (a == "pop")
	//		{
	//			if (top-bot>0)
	//			{
	//				cout << c[++bot]<<endl;
	//			}
	//			else
	//				cout << -1<<endl;
	//		}
	//		else if (a=="front")
	//		{
	//			if (top <=bot)
	//				cout << -1 << endl;
	//			else
	//				cout << c[bot+1] << endl;
	//		}
	//		else if (a == "back")
	//		{
	//			if (top <=bot)
	//				cout << -1 << endl;
	//			else
	//				cout << c[top] << endl;
	//		}
	//		else if (a == "empty")
	//		{
	//			if (top-bot <= 0)
	//				cout << 1 << endl;
	//			else
	//				cout << 0 << endl;
	//		}
	//		else if (a == "size")
	//		{
	//			cout << top -bot<< endl;
	//		}
	//	}
	//	return 0;
	//}