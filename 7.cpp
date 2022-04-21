//#include<iostream>
//#include<cmath>
//
//using namespace std;
//double s(int& n)
//{
//    double s = 1;
//    for (int i = 2; i <= n; i++)
//    {
//        s += pow(-1, i) / i;
//    }
//    return s;
//}
//int ktr(int n)
//{
//    int dem = 0;
//    int temp;
//    temp = n;
//    if (n == 0)
//        dem = 1;
//    while (temp != 0)
//    {
//        if (temp % 2 == 1)
//        {
//            dem++;
//        }
//        else
//            temp = temp / 10;
//    }
//    return dem;
//}
//
//int main()
//{
//    int n;
//    int chon;
//    do
//    {
//        system("cls");
//        cout << "=================Menu============== \n";
//        cout << "1.1+1/2-1/3........1/n \n";
//        cout << "2.Dem so nguyen \n";
//        cout << "==================================== \n";
//        cout << "1 Trong 2 chuc nang = ";
//        cin >> chon;
//        switch (chon)
//        {
//        case 1:
//            cout << "Nhap vao so nguyen n = ";
//            cin >> n;
//
//            cout << "S(n) = " << s(n) << endl;
//            break;
//        case 2:
//            cout << "Nhap vao so nguyen n = ";
//            cin >> n;
//            if (ktr(n))
//            {
//                cout << n << " co " << ktr(n) << " chu so le ";
//            }
//            else
//                cout << " Khong co so le " << endl;
//        }
//        system("Pause");
//    } while (chon !=2);
//    system("pause");
//    return 0;
//
//}
////#include<iostream>
////#include<cmath>
////
////using namespace std;
////double s(int& n)
////{
////    double s = 1;
////    for (int i = 2; i <= n; i++)
////    {
////        s += pow(-1, i) / i;
////    }
////    return s;
////}
////int ktr(int n)
////{
////    int chs;
////    int dem = 0;
////    while (n >= 1)
////    {
////        if (n % 2 != 0)
////        {
////            dem++;
////        }
////        n /= 10;
////
////    }
////    return dem;
////
////}
////
////int main()
////{
////    int n;
////    int chon;
////    do
////    {
////        system("cls");
////        cout << "=================Menu============== \n";
////        cout << "1.1+1/2-1/3........1/n \n";
////        cout << "2.Dem so nguyen \n";
////        cout << "==================================== \n";
////        cout << "1 Trong 2 chuc nang = ";
////        cin >> chon;
////        switch (chon)
////        {
////        case 1:
////            cout << "Nhap vao so nguyen n = ";
////            cin >> n;
////
////            cout << "S(n) = " << s(n) << endl;
////            break;
////        case 2:
////            cout << "Nhap vao so nguyen n = ";
////            cin >> n;
////            cout << n << " co " << ktr(n) << " chu so le ";
////        }
////        system("Pause");
////    } while (true);
////
////    return 0;
////
////}