//#include <iostream>
//using namespace std;
//bool KT_SHT(int n)
//{
//	int s = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (n % i == 0)
//			s += i;
//		if (s == n)
//			return true;
//	}
//		return false;
//}
//int SUM(int n)
//{
//	int tong = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (KT_SHT(i))
//			tong += i;
//	}
//	return tong;
//}
//void HV(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void daonguoc(int n)
//{
//	int l = 0;
//	int r = n - 1;
//	for (int i = 0; i <= n; i++)
//	{
//		if (l < r)
//		{
//			HV(l, r);
//		}
//		l++;
//		r--;
//
//	}
//}
//
//int main()
//{
//	int n;
//	int tong = 0;
//	int chon;
//	do
//	{
//		cout << "\t *** MENU ***\n";
//		cout << "\t 1. Xuat cac so hoan thien nho hon n \n";
//		cout << "\t 2. Tinh Tong cac so hoan thien nho hon n \n";
//		cout << "\t 3. Dao nguoc \n";
//		cout << "\t 4. Thoat \n";
//		cout << " Bam chon(1-4): ";
//		cin >> chon;
//		system("cls");
//		switch (chon)
//		{
//		case 1:
//			cout << " Nhap so nguyen n: ";
//			cin >> n;
//			cout << " Cac so hoan thien la: ";
//			for (int i = 0; i <= n; i++)
//			{
//				if (KT_SHT(i))
//					cout << i << " , ";
//			}
//			break;
//		case 2:
//			cout << " Tinh tong cac so hoan thien nho hon n: " << SUM(n) << endl;
//			break;
//		case 3:
//			break;
//		case 4:
//			cout << " Thoat" << endl;
//			break;
//		default:
//			cout << " Nhap sai lua chon vui long nhap (1-4): " << endl;
//			break;
//		}
//	} while (chon != 4);
//	system("pause");
//	return 0;
//}