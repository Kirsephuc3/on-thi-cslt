//#include <iostream>
//using namespace std;
//
//int timSoDao(int nInput)
//{
//	int nSoDao = 0, nRem;
//
//	while (nInput != 0)
//	{
//		nSoDao = (nSoDao * 10) + (nInput %10);
//		nInput = nInput / 10;
//	}
//
//	return nSoDao;
//}
//bool laSoDoiXung(int nInput)
//{
//	if (nInput == timSoDao(nInput))
//		return true;
//	else
//		return false;
//}
//int SUM(int n)
//{
//	int tong = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (laSoDoiXung(i))
//			tong += i;
//	}
//	return tong;
//}
//int main()
//{
//	int n;
//	int chon;
//	do
//	{
//		cout << "\t *** MENU ***\n";
//		cout << "\t 1. Xuat cac so doi dung nho hon n: " << endl;
//		cout << "\t 2. Tinh tong cac so doi xung " << endl;
//		cout << " \t 3. Thoat " << endl;
//		cout << " Bam chon (1-3): " << endl;
//		cin >> chon;
//		system("cls");
//		switch (chon)
//		{
//		case 1:
//			cout << " Nhap so so nguyen: ";
//			cin >> n;
//			cout << " Cac so doi xung: ";
//			for (int i = 0; i < n; i++)
//			{
//				if (laSoDoiXung(i))
//					cout << i << " , ";
//			}
//			cout << endl;
//			break;
//		case 2:
//			cout << " Tong so doi xung la; " << SUM(n) << endl;
//			break;
//		case 3:
//			cout << " Thoat ";
//			break;
//		default:
//			cout << " KHong co lua chon vui long nhap (1-3): " << endl;
//			break;
//		}
//	} while (chon != 3);
//	system("pause");
//	return 0;
//}