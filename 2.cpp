//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//int vt_min(int a[], int n)
//{
//	int min = a[0];
//	int vt = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] <= min)
//		{
//			a[i] = min;
//			vt = i;
//		}
//	}
//	return vt;
//}int vt_max(int a[], int n)
//{
//	int max = a[0];
//	int vt = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (max <= a[i])
//		{
//			max = a[i];
//			vt = i;
//		}
//	}
//	return vt;
//}
//void HV(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void SapXep(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] < a[j])
//			{
//				HV(a[i], a[j]);
//			}
//		}
//	}
//}
//int VT(int a[], int n)
//{
//	SapXep(a, n);
//	return a[1];
//}
//void tim(int a[100], int n)
//{
//	int max = a[0];
//	int max2 = 0;
//	int vt = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//	}
//	// gan gia tri 
//	for (int i = 0; i < n; i++)
//	{
//		if (max == a[i])
//		{
//			continue;
//		}
//		else
//			max2 = a[i];
//		vt = i;
//	}
//	cout << "So lon thu 2 la " << max2 << " o vi tri " << vt << endl;
//}
//
//void Nhap(int a[], int n)
//{
//	srand((NULL));
//	for(int i=0;i<n;i++)
//	{
//		a[i] = rand() % 20 + 1; //1-10
//		cout <<" + " << a[i] << endl;
//	}
//}
//void Xuat(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//}
//int main()
//{
//	int a[100];
//	int n{};
//	do
//	{
//		cout << " Nhap so phan tu: ";
//		cin >> n;
//		if (n <= 1 || n > 100)
//			cout << " Nhap sai nhap lai: ";
//	} while (n <= 1 || n > 100);
//	Nhap(a, n);
//	cout << " Xuat Phan tu trong Mang: ";
//	Xuat(a, n);
//	cout << "\n Vi tri nho nhat trong mang: " << vt_min(a, n) << endl;
//	cout << "\n Vi tri lon nhat trong mang:  " << vt_max(a, n) << endl;
//	cout << "\n Vi tri lon thu 2 trong mang: " << VT(a, n);
//	tim(a, n);
//	system("pause");
//	return 0;
//
//}
