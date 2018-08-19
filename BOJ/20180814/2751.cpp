//#include <iostream>
//using namespace std;
//void mergeSortIn(int val[], int buffer[], int start, int mid, int end)
//{
//	int i, j, k;//i는 첫번째 부분집합 원소, j는 두번쨰 부분집합 원소, k는 버퍼 현재위치를 가리킴
//	i = start;
//	j = mid + 1;
//	k = start;
//	while (i <= mid && j <= end)//두 부분집합 중 한개가 가장 끝원소를 넘어갈 경우 종료
//	{
//		if (val[i] <= val[j])//첫번째 부분집합이 가리키는 원소가 더 작으면
//		{
//			buffer[k] = val[i];
//			i++;
//
//		}
//		else//두번째 부분집합이 가리키는 원소가 더 작으면
//		{
//			buffer[k] = val[j];
//			j++;
//		}
//		k++;
//	}//while문 종료시 둘중 한 부분집합만 원소가 남게됨
//	if (i > mid)//첫번째 부분집합이 종료 되었을시
//	{
//		for (int t = j;j < end;j++, k++)
//		{
//			buffer[k] = val[j];
//		}
//	}
//	else//두번쨰 부분집합이 종료 되었을시
//	{
//		for (int t = i;i < end;i++, k++)
//		{
//			buffer[k] = val[i];
//		}
//	}
//	for (int t = start; t <= end; t++)
//	{
//		val[t] = buffer[t];//값 옮기기
//	}
//}
//void mergeSort(int val[], int buffer[], int start, int end)
//{
//	int mid = 0;
//	if (start < end)//1단위로 쪼개졋을땐 더 쪼갤 필요 없음
//	{
//		mid = (start + end) / 2;
//		mergeSort(val, buffer, start, mid);//첫번째 부분집합
//		mergeSort(val, buffer, mid + 1, end);//두번째 부분집합
//		mergeSortIn(val, buffer, start, mid, end);
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	int *val = new int[n];
//	int *buffer = new int[n];
//	for (int i = 0;i < n;i++)
//	{
//		cin >> val[i];
//	}
//	mergeSort(val, buffer, 0, n - 1);
//	for (int i = 0;i < n;i++)
//	{
//		cout << val[i] << endl;
//	}
//	return 0;
//}//알고리즘 stl을 이용하지 않으려 했지만 실패