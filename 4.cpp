//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int fibonacci(int n) {
//    int f0 = 0;
//    int f1 = 1;
//    int fn = 1;
//    int i;
//
//    if (n < 0) {
//        return -1;
//    }
//    else if (n == 0 || n == 1) {
//        return n;
//    }
//    else {
//        for (i = 2; i < n; i++) {
//            f0 = f1;
//            f1 = fn;
//            fn = f0 + f1;
//        }
//    }
//    return fn;
//}
//int tong(int n)
//{
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        sum += fibonacci(i);
//    }
//    return sum;
//}
//int nghichdao(int n)
//{
//	int x,t=0;
//	while (n > 0)
//	{
//		t = t * 10 + n % 10;
//		n = n / 10;
//	}
//	return t;
//}
//int main()
//{
//	int a[100];
//	int n;
//    int chon;
//    do
//    {
//        cout << " \t *** MENU ***\n";
//        cout << "\t 1. Xuat ra cac so fibo khong qua n: " << endl;
//        cout << "\t 2. Tinh tong cac so fibo khong qua n: " << endl;
//        cout << "\t 3. Nghich dao day fibonacci: " << endl;
//        cout << "\t 4. Thoat" << endl;
//        cout << " Bam chon (1-4): ";
//        cin >> chon;
//        system("cls");
//        switch (chon)
//        {
//        case 1:
//            cout << " Nhap so nguyen n: ";
//            cin >> n;
//            cout << " cac so fibonacci la: ";
//            for (int i = 0; i < n; i++)
//            {
//                cout << fibonacci(i) << " , ";
//            }
//            break;
//        case 2:
//            cout << "Tinh tong cac so fibonacci nho hon n: " << tong(n) << endl;
//            break;
//        case 3:
//            for (int i = 0; i < n; i++)
//            {
//                cout << "Nghich dao day fibonacci: " << nghichdao(n) << endl;
//            }
//            break;
//        case 4:
//            cout << " Thoat " << endl;
//            break;
//        default:
//            cout << " Nhap sai ! Vui long chon(1-3): " << endl;
//            break;
//        }
//    } while (chon != 4);
//    system("pause");
//    return 0;
//}