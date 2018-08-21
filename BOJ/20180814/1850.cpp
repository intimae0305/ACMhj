//#include <iostream>
//using namespace std;
//long long get(long long A, long long B)
//{
//	if (A == B)
//		return A;
//	else if (A == 0 || B == 0)
//		return 0;
//	else if (A>B)
//		return get(B, A - B - 1);
//	else if (A<B)
//		return get(A, B - A - 1);
//}
//int main() {
//	long long A, B;
//	long long g;
//	cin>> A >> B;
//	g = get(A - 1, B - 1);
//	for (int i = 0; i<g + 1; i++)
//		cout << '1';
//	return 0;
//}
//
