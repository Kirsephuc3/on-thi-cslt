//#include <iostream>
//#include <cmath>
//using namespace std;
//bool KTSNT(int n)
//{if (n < 2)
//		return false;
//	for (int i = 2; i < sqrt((double)n); i++)
//	{
//		if (n % i == 0)
//			return false;
//		return true;
//	}
//}
//int Tich(int n)
//{
//	int tich = 1;
//	for (int i = 0; i < n; i++)
//	{
//		if (KTSNT(i))
//		{
//			tich = tich *i;
//		}
//	}
//	return tich;
//}
// int He_10(int n) {
//		double bin =0;
//		int i=0;
//		while (n>0){
//			bin  +=(n%2) * pow((double)10,i);
//			n /= 2;
//			i++;
//		}
//		return bin;
//	}
// int He_2(int n)
// {
//	 int p = 0;
//	 int decNumber = 0;
//	 while (n > 0)
//	 {
//		 decNumber += (n % 10) * pow(2, p);
//		 ++p;
//		n /= 10;
//	 }
//	 return decNumber;
// }
//int main()
//{
//	int n;
//	int tich = 1;
//	int chon;
//	do
//	{
//		cout << "\t *** MENU ***" << endl;
//		cout << " \t 1. Xuat cac so la so nguyen to nho hon n: " << endl;
//		cout << " \t 2. Tinh tich cac so nguyen to nho hon n: " << endl;
//		cout << " \t 3. Doi he 10 sang he 2: " << endl;
//		cout << " \t 4. Doi tu he 2 sang 10: " << endl;
//		cout << "\t 5. Thoat" << endl;
//		cout << " Bam chon: ";
//		cin >> chon;
//		system("cls");
//		switch (chon)
//		{
//		case 1:
//			cout << " Nhap so nguyen n: ";
//			cin >> n;
//			for (int i = 2; i < n; i++)
//			{
//				if (KTSNT(i))
//					cout << i << " ";
//			}
//			cout << endl;
//			break;
//		case 2:
//			cout << " Tinh tich cac so nguyen to duoi n: " << Tich(n) << endl;
//			break;
//		case 3:
//			cout << " Nhap so nguyen n: ";
//			cin >> n;
//			cout << " Doi tu he 10 sang he 2 " << He_10(n) << endl;
//			break;
//		case 4:
//			cout << " Nhap so nguyen n: ";
//			cin >> n;
//			cout << " Doi tu 2 sang 10 " << He_2(n) << endl;
//		case 5:
//			cout << " Thoat";
//			break;
//		default:
//			cout << " Nhap sai nhap lai: ";
//		}
//	} while (n != 5);
//	system("pause");
//	return 0;
//}