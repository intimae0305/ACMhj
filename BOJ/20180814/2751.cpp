//#include <iostream>
//using namespace std;
//void mergeSortIn(int val[], int buffer[], int start, int mid, int end)
//{
//	int i, j, k;//i�� ù��° �κ����� ����, j�� �ι��� �κ����� ����, k�� ���� ������ġ�� ����Ŵ
//	i = start;
//	j = mid + 1;
//	k = start;
//	while (i <= mid && j <= end)//�� �κ����� �� �Ѱ��� ���� �����Ҹ� �Ѿ ��� ����
//	{
//		if (val[i] <= val[j])//ù��° �κ������� ����Ű�� ���Ұ� �� ������
//		{
//			buffer[k] = val[i];
//			i++;
//
//		}
//		else//�ι�° �κ������� ����Ű�� ���Ұ� �� ������
//		{
//			buffer[k] = val[j];
//			j++;
//		}
//		k++;
//	}//while�� ����� ���� �� �κ����ո� ���Ұ� ���Ե�
//	if (i > mid)//ù��° �κ������� ���� �Ǿ�����
//	{
//		for (int t = j;j < end;j++, k++)
//		{
//			buffer[k] = val[j];
//		}
//	}
//	else//�ι��� �κ������� ���� �Ǿ�����
//	{
//		for (int t = i;i < end;i++, k++)
//		{
//			buffer[k] = val[i];
//		}
//	}
//	for (int t = start; t <= end; t++)
//	{
//		val[t] = buffer[t];//�� �ű��
//	}
//}
//void mergeSort(int val[], int buffer[], int start, int end)
//{
//	int mid = 0;
//	if (start < end)//1������ �ɰ������� �� �ɰ� �ʿ� ����
//	{
//		mid = (start + end) / 2;
//		mergeSort(val, buffer, start, mid);//ù��° �κ�����
//		mergeSort(val, buffer, mid + 1, end);//�ι�° �κ�����
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
//}//�˰��� stl�� �̿����� ������ ������ ����