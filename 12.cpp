//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void Nhap(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = rand() % 20 + 1;
//		cout << a[i] << " ";
//	}
//	cout << endl;
//}
//void Xuat(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << ", ";
//	}
//	cout << endl;
//}
//int Tong(int a[], int n)
//{
//	int tong = 0;
//	for (int i = 0; i < n; i++)
//	{
//		tong += a[i];
//	}
//	return tong;
//}
//int Tich(int a[], int n)
//{
//	int tich = 1;
//	for (int i = 0; i < n; i++)
//	{
//		tich *= a[i];
//	}
//	return tich;
//}
//double TBC(int a[], int n)
//{
//	int tong = 0;
//	for (int i = 0; i < n; i++)
//	{
//		tong += a[i];
//	}
//	return ((double)tong / n);
//}
//void daonguoc(int a[], int n)
//{
//	int temp;
//	for (int i = 0; i < n / 2; i++)
//	{
//		temp = a[i];
//		a[i] = a[n - i - 1];
//		a[n - i - 1] = temp;
//	}
//}
//bool Tim(int a[], int n, int x, int& vt)
//{
//	int i = 0;
//	bool kq = false;
//	while (i < n && a[i] != x)
//		i++;
//	if (i < n)
//	{
//		kq = true;
//		vt = i;
//	}
//	return kq;
//}
//void chenpt(int a[], int& n, int x, int vt)
//{
//	for (int i = n - 1; i >= vt; i--)
//		a[i + 1] = a[i];
//	a[vt] = x;
//	n++;
//}
//void Xoa(int a[], int &n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] == a[j])
//			{
//				for (int k = j; k < n; k++)
//					a[k] = a[k + 1];
//				n--;
//				j--;
//			}
//		}
//	}
//}
//void SX_tang(int a[], int n)
//{
//	int temp;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] > a[j])
//			{
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//}
//void dem(int a[], int& n)
//{
//	int count;
//	for (int i = 0; i < n; i++)
//	{
//		count = 1;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] == a[j])
//			{
//				count++;
//				for (int k = j; k < n; k++)
//					a[k] = a[k + 1];
//				n--;
//				j--;
//			}
//		}
//		cout << a[i] << " dem duoc: " << count << " phan tu: " << endl;
//	}
//
//}
//int main()
//{
//	int n;
//	int a[100];
//	int chon;
//	int x;
//	int vt;
//	int xoa;
//	do
//	{
//		cout << "\t *** MENU *** \n";
//		cout << "\t 1. Nhap mang: \n";
//		cout << " \t 2. Xuat mang: \n";
//		cout << " \t 3. Tinh tong mang: \n";
//		cout << " \t 4. Tinh tich: \n";
//		cout << "\t 5. Tinh tbc: \n";
//		cout << " Bam chon: ";
//		cin >> chon;
//		system("cls");
//		switch (chon)
//		{
//		case 1:
//			cout << " Nhap mang n: ";
//			cin >> n;
//			Nhap(a, n);
//			break;
//		case 2:
//			cout << " Xuat mang: " << endl;
//			Xuat(a, n);
//			break;
//		case 3:
//			cout << " Tong cua mang la: " << Tong(a, n) << endl;
//			break;
//		case 4:
//			cout << " TInh tich cua mang la: " << Tich(a, n) << endl;
//			break;
//		case 5:
//			cout << " TBC cua mang la: " << TBC(a, n) << endl;
//			break;
//		case 6:
//			cout << " Mang dao la: " << endl;
//			daonguoc(a, n);
//			Xuat(a, n);
//			break;
//		case 7:
//			cout << " Nhap vi tri can tim: ";
//			cin >> x;
//			if (Tim(a, n, x, vt))
//			{
//				cout << " TIm thay vi tri " << x <<" tai: " << vt << endl;
//			}
//			else
//				cout << " Khong tim thay ";
//			break;
//		case 8:
//			cout << " Nhap so can chen: ";
//			cin >> x;
//			cout << " Nhap vi tri can chen: ";
//			cin >> vt;
//			chenpt(a, n, x, vt);
//			cout << " Xuat mang: " << endl;
//			Xuat(a, n);
//		case 9:
//			Xoa(a, n);
//			cout << " Mang sau khi xoa la:" << endl;
//			Xuat(a, n);
//		case 10:
//			SX_tang(a, n);
//			cout << " Mang sx tang: " << endl;
//			Xuat(a, n);
//			break;
//		case 11:
//			dem(a, n);
//			break;
//		default:
//			cout << " Nhap sai " << endl;
//			break;
//		}
//	} while (true);
//	system("pause");
//	return 0;
//}