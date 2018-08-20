//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//int main()
//{
//	vector<int> a(4, 0);
//	string word;
//	while (1)
//	{
//		getline(cin, word);
//		if (word == "")
//			break;
//		for (int i = 0;i < word.length();i++)
//		{
//			if ((int)word[i] >= 97 && (int)word[i] <= 122)
//			{
//				a[0]++;
//			}
//			else if ((int)word[i] >= 65 && (int)word[i] <= 90)
//			{
//				a[1]++;
//			}
//			else if ((int)word[i] >= 48 && (int)word[i] <= 57)
//			{
//				a[2]++;
//			}
//			else
//			{
//				a[3]++;
//			}
//		}
//		for (int i = 0;i < 4;i++)
//		{
//			cout << a[i] << ' ';
//		}
//		cout << endl;
//		a = { 0,0,0,0 };
//	}
//	return 0;
//}