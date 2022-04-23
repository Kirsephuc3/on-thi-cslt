//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int fibonaci(int n)
//{
//    int f0 = 1;
//    int f1 = 1;
//    int f, i;
//    if (n < 0)
//        return -1; //invalid value
//    if (n < 2)
//        return 1;
//    i = 1;
//    while (i < n)
//    {
//        f = f0 + f1;
//        f0 = f1;
//        f1 = f;
//        i++;
//    }
//    return f;
//}
//int is_fibo_number(int value)
//{
//    int i = 0;
//    while (value > fibonaci(i))
//    {
//        ++i;
//    }
//    if (value == fibonaci(i))
//        return 1;
//    return 0;
//}
//
//int main() {
//    int n;
//    cout << " Nhap so nguyen n:";
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        if (is_fibo_number(i))
//        {
//            cout << i << endl;
//        }
//    }
//    return 0;
//}
