//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//void Nhap(int a[], int& as)
//{
//	srand((NULL));
//	for (int i = 0; i < as; i++)
//	{
//		a[i] = rand() % 10;
//	}
//}
//void Xuat(int a[], int as)
//{
//	for (int i = 0; i < as; i++)
//	{
//		cout << a[i] << ", ";
//	}
//}
//void xoa_ham_trung(int a[], int& n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] == a[j])
//			{
//				for (int k = j; k < n - 1; k++)
//					a[k] = a[k + 1];
//				n--;
//				j--;
//			}
//		}
//	}
//}
//int main()
//{
//	int a[100];
//	int n;
//	cout << " Nhap so luong phan tu trong mang: ";
//	cin >> n;
//	Nhap(a, n);
//	Xuat(a, n);
//	xoa_ham_trung(a, n);
//	cout << "\n Mang sau khi xoa trung: " << endl;
//	Xuat(a, n);
//	system("pause");
//	return 0;
//}