//#include <iostream>
//using namespace std;
//
//int timSoDao(int nInput)
//{
//	int nSoDao = 0, nRem;
//
//	while (nInput != 0)
//	{
//		// Lấy chữ số cuối của số nguyên sử dụng toán tử chia lấy dư (Modulus)
//		nRem = nInput % 10;
//
//		// Nhân số đảo với 10 và cộng với chữ số cuối
//		nSoDao = (nSoDao * 10) + nRem;
//
//		// Xóa chữ số cuối bằng cách sử dụng toán tử chia lấy phần nguyên (Division)
//		nInput = nInput / 10;
//	}
//
//	return nSoDao;
//}
//// Hàm kiểm tra một số nguyên dương n cho trước có phải là số đối xứng hay không
//bool laSoDoiXung(int nInput)
//{
//	if (nInput == timSoDao(nInput))
//		return true;
//	else
//		return false;
//
//	// <=> return (n == timSoDao(n));
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