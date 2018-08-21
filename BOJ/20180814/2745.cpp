//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//long long pow(int n, int count)
//{
//	long long temp = 1;
//	for (int i = 0;i < count;i++)
//	{
//		temp *= n;
//	}
//	return temp;
//}
//int main()
//{
//	string a;
//	int n;
//	long long count = 0;
//	long long sum = 0;
//	cin >> a >> n;
//	for (int i = a.size()-1;i >=0;i--)
//	{
//		if(a[i]>=48&&a[i]<=57)
//			sum+=(a[i]-'0')* pow(n, count);
//		else
//		{
//			sum += (a[i] -'A'+10)*pow(n, count);
//		}
//		count++;
//	}
//	cout << sum;
//	
//	return 0;
//}