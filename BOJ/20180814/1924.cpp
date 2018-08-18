//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int a, b, sum;
//	sum = 0;
//	cin >> a >> b;
//	for (int i = 0;i < 12;i++)
//	{
//		if (a - 1 > i)//입력된 월수가 i보다 클 경우(1월부터 체크)
//		{
//			sum += arr[i];//일수를 세나감
//		}
//		else if (a - 1 == i)
//		{
//			sum += b;
//		}
//		else
//		{
//			break;
//		}
//	}
//	switch (sum % 7)
//	{
//	case 0:
//		cout << "SUN" << endl;
//		break;
//	case 1:
//		cout << "MON" << endl;
//		break;
//	case 2:
//		cout << "TUE" << endl;
//		break;
//	case 3:
//		cout << "WED" << endl;
//		break;
//	case 4:
//		cout << "THU" << endl;
//		break;
//	case 5:
//		cout << "FRI" << endl;
//		break;
//	case 6:
//		cout << "SAT" << endl;
//		break;
//	}
//	return 0;
//}