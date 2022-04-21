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
////int fibonaci(int n)
////{
////    int f0 = 1;
////    int f1 = 1;
////    int f, i;
////    if (n < 0)
////        return -1; //invalid value
////    if (n < 2)
////        return 1;
////    i = 1;
////    while (i < n)
////    {
////        f = f0 + f1;
////        f0 = f1;
////        f1 = f;
////        i++;
////    }
////    return f;
////}
//int is_fibo_number(int value)
//{
//    int i = 0;
//    while (value > fibonacci(i))
//    {
//        ++i;
//    }
//    if (value == fibonacci(i))
//        return 1;
//    return 0;
//}
//int tong(int n)
//{
//    int sum = 0;
//    for (int i = 2; i < n; i++)
//    {
//        if (is_fibo_number(i))
//        {
//            sum += i;
//        }
//    }
//    return sum;
//}
//int main()
//{
//	int a[100];
//	int n;
//    int chon;
//   /* cout << " Nhap so nguyen n: ";
//    cin >> n;
//    cout << n << " co thuoc day fibonacci khong " << endl;
//    if (is_fibo_number(n))
//    {
//        cout << " Phai " << endl;
//    }
//    else
//        cout << "Khong " << endl;*/
//    do
//    {
//        cout << " \t *** MENU ***\n";
//        cout << "\t 1. Xuat ra cac so fibo khong qua n: " << endl;
//        cout << "\t 2. Tinh tong cac so fibo khong qua n: " << endl;
//        cout << "\t 3. Thoat" << endl;
//        cout << " Bam chon (1-3): ";
//        cin >> chon;
//        system("cls");
//        switch (chon)
//        {
//        case 1:
//            cout << " Nhap so nguyen n: ";
//            cin >> n;
//            cout << " cac so fibonacci la: ";
//            for (int i = 2; i < n; i++)
//            {
//                if (is_fibo_number(i))
//                    cout << i << " , ";
//            }
//            break;
//        case 2:
//            cout << "Tinh tong cac so fibonacci nho hon n: " << tong(n) << endl;
//            break;
//        case 3:
//            cout << " Thoat " << endl;
//            break;
//        default:
//            cout << " Nhap sai ! Vui long chon(1-3): " << endl;
//            break;
//        }
//    } while (chon != 3);
//    system("pause");
//    return 0;
//}