//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//void Nhap(int a[], int n)
//{
//	srand((NULL));
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = rand() % 20 + 1;
//		cout << a[i] << " " << endl;
//	}
//}
//void Xuat(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " , ";
//	}
//	cout << endl;
//}
//void sapxep(int a[], int n)
//{
//	int i, j;
//	for (i = 0; i < n - 1; i++)
//		for (j = i + 1; j < n; j++)
//			if ((a[i] % 2 != 0 && a[j] % 2 == 0)
//				|| (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] < a[j])
//				|| (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] > a[j]))
//			{
//				int t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//}
//int main()
//{
//	int a[100];
//	int n;
//	cout << " Nhap so luong phan tu: ";
//	cin >> n;
//	Nhap(a, n);
//	cout << " Xuat Mang: " << endl;
//	Xuat(a, n);
//	cout << " Mang sau khi da sap xep la:";
//	sapxep(a, n);
//	Xuat(a, n);
//	system("pause");
//	return 0;
//}