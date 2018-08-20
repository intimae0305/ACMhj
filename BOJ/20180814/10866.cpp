//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	int d[10001];
//	int size = 0;
//	int n;
//	cin >> n;
//	cin.ignore();
//	string a;
//	int num;
//	string order;
//	for (int i = 0;i < n;i++)
//	{
//		getline(cin, a);
//		num=atoi(a.substr(a.find(' ') + 1).c_str());
//		order = a.substr(0,a.find(' '));
//		if (order == "push_front")
//		{
//			for (int i = size;i >0;i--)
//			{
//				d[i] = d[i - 1];
//			}
//			d[0] = num;
//			size++;
//		}
//		else if (order == "push_back")
//		{
//			d[size] = num;
//			size++;
//		}
//		else if (order =="pop_front" )
//		{
//			if (size > 0)
//			{
//				cout << d[0] << endl;
//				for (int i = 1;i <size;i++)
//				{
//					d[i - 1] = d[i];
//				}
//				size--;
//			}
//			else
//				cout<< -1 << endl;
//		}
//		else if (order =="pop_back" )
//		{
//			if (size > 0)
//			{
//				cout << d[size - 1] << endl;
//				size--;
//			}
//			else
//			{
//				cout << -1 << endl;
//			}
//		}
//		else if (order == "size")
//		{
//			cout << size << endl;
//		}
//		else if (order =="empty" )
//		{
//			if (size <= 0)
//			{
//				cout << 1 << endl;
//			}
//			else
//				cout << 0 << endl;
//		}
//		else if (order =="front" )
//		{
//			if (size > 0)
//			{
//				cout << d[0] << endl;
//			}
//			else
//			{
//				cout << -1 << endl;
//			}
//		}
//		else if (order =="back" )
//		{
//			if (size > 0)
//			{
//				cout << d[size-1] << endl;
//			}
//			else
//				cout << -1 << endl;
//		}
//	}
//	return 0;
//}