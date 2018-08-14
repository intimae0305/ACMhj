#include <iostream>
using namespace std;
int changeInt(char a)
{
	return (int)a - (int)'0';
}
int main()
{
	int temp;
	int testcase;
	bool check = false;
	cin >> testcase;
	char** arr = new char*[testcase];
	for (int i = 0;i < testcase;i++)
	{
		arr[i] = new char[8];
	}
	for (int i = 0;i < testcase;i++)
	{
		cin >> arr[i];
	}
	for (int i = 0;i < testcase;i++)
	{
		if (arr[i][4] == '0')
		{
			switch (arr[i][5])
			{
			case '1':
				temp = changeInt(arr[i][6]) * 10 + changeInt(arr[i][7]);
				if (temp >= 1 && temp <= 31)
				{
					check = true;
				}
				break;
			case '2':
				temp = changeInt(arr[i][6]) * 10 + changeInt(arr[i][7]);
				if (temp >= 1 && temp <= 28)//6, 7 篮 老
				{
					check = true;
				}
				break;
			case '3':
				temp = changeInt(arr[i][6]) * 10 + changeInt(arr[i][7]);
				if (temp >= 1 && temp <= 31)//6, 7 篮 老
				{
					check = true;
				}
				break;
			case '4':
				temp = changeInt(arr[i][6]) * 10 + changeInt(arr[i][7]);
				if (temp >= 1 && temp <= 30)//6, 7 篮 老
				{
					check = true;
				}
				break;
			case '5':
				temp = changeInt(arr[i][6]) * 10 + changeInt(arr[i][7]);
				if (temp >= 1 && temp <= 31)//6, 7 篮 老
				{
					check = true;
				}
				break;
			case '6':
				temp = changeInt(arr[i][6]) * 10 + changeInt(arr[i][7]);
				if (temp >= 1 && temp <= 30)//6, 7 篮 老
				{
					check = true;
				}
				break;
			case '7':
				temp = changeInt(arr[i][6]) * 10 + changeInt(arr[i][7]);
				if (temp >= 1 && temp <= 31)//6, 7 篮 老
				{
					check = true;
				}
				break;
			case '8':
				temp = changeInt(arr[i][6]) * 10 + changeInt(arr[i][7]);
				if (temp >= 1 && temp <= 31)//6, 7 篮 老
				{
					check = true;
				}
				break;
			case '9':
				temp = changeInt(arr[i][6]) * 10 + changeInt(arr[i][7]);
				if (temp >= 1 && temp <= 30)//6, 7 篮 老
				{
					check = true;
				}
				break;
			}
		}
		else if (arr[i][4] == '1')
		{
			switch (arr[i][5])
			{
			case '1':
				temp = changeInt(arr[i][6]) * 10 + changeInt(arr[i][7]);
				if (temp >= 1 && temp <= 30)//6, 7 篮 老
				{
					check = true;
				}
				break;
			case '2':
				temp = changeInt(arr[i][6]) * 10 + changeInt(arr[i][7]);
				if (temp >= 1 && temp <= 31)//6, 7 篮 老
				{
					check = true;
				}
				break;
			}
		}
		if (check)
		{
			cout << '#' << i + 1 << ' ' << arr[i][0] << arr[i][1] << arr[i][2] << arr[i][3] << '/' << arr[i][4] << arr[i][5] << '/' << arr[i][6] << arr[i][7] << endl;
		}
		else
		{
			cout << '#' << i + 1 << ' ' << -1 << endl;
		}
		check = false;
	}
	return 0;
}