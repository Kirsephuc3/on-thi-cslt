
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(int a[], int& as)
{
	srand((NULL));
	for (int i = 0; i < as; i++)
	{
		a[i] = rand() % 20 + 1;
		cout << a[i] << endl;
	}
}
void Xuat(int a[], int as)
{
	for (int i = 0; i < as; i++)
	{
		cout << a[i] << ", ";
	}
}
bool Tim(int a[], int as, int x, int& vt)
{
	int i = 0;
	int kq = false;
	while (i < as && a[i] != x)
	{
		i++;
		if (i < as)
		{
			kq = true;
			vt = i;
		}
	}
	return kq;
}
void daonguocmang(int a[], int as) 
{
	int temp;
	for (int i = 0; i < as/2; i++) 
	{
		temp = a[i];
		a[i] = a[as - i - 1];
		a[as - i - 1] = temp;
	}
}
void Xoa(int a[], int &as, int p)
{
	for (int i = p; i < as-1; i++)
	{
		a[i] = a[i + 1];
		as--;
	}
}
int MAX(int a[], int as)
{
	int max = a[0];
	for (int i = 0; i < as; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	return max;
}
int vt_max(int a[], int n)
{
	int max = a[0];
	int vt = 0;
	for (int i = 0; i < n; i++)
	{
		if (max <= a[i])
		{
			max = a[i];
			vt = i;
		}
	}
	return vt;
}
double avg(int a[], int as) {
	int tong = 0;
	for (int i = 0; i < as; i++) {
		tong += a[i];
	}
	return tong / as;
}
void timmax2(int a[100], int n)
{
	int max = a[0];
	int max2 = 0;
	int vt = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	// gan gia tri 
	for (int i = 0; i < n; i++)
	{
		if (max == a[i])
		{
			continue;
		}
		else
			max2 = a[i];
		vt = i;
	}
	cout << "So lon thu 2 la " << max2 << " o vi tri " << vt << endl;
}
void demsolantrungnhau(int a[], int& n)
{
	int dem;
	for (int i = 0; i < n; i++)
	{
		dem = 1;
		for (int j = i + 1; j < n-1; j++)
			if (a[i] == a[j])
			{
				dem++;
				for (int k = j; k < n - 1; k++)
					a[k] = a[k + 1];
				n--;
				j--;
			}
			cout << a[i] << " So pt " << dem << endl;
	}
}
void xoatrung(int a[], int& n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				for (int k = j; k < n - 1; k++)
					a[k] = a[k + 1];
				n--;
				j--;
			}
		}
	}
}
int main()
{
	int a[100];
	int n{};
	int x;
	int chon;
	int vt;
	int p,k;
	cout << "\t*** MENU ***\t" << endl;
	cout << "\t 1. Nhap " << endl;
	cout << "\t 2. Xuat " << endl;
	cout << "\t 3. Tim " << endl;
	cout << "\t 4. Dao " << endl;
	cout << "\t 5. Xoa " << endl;
	cout << "\t 6. MAX " << endl;
	cout << "\t 7. TBC" << endl;
	cout << "\t 8. MAX 2" << endl;
	cout << "\t 9. Dem so lan trung nhau " << endl;
	cout << "\t 10.Xoa so trung " << endl;
	cout << "\t 11.Thoat  " << endl;
	do {
		cout << " Bam chon: ";
		cin >> chon;
		system("cls");
		switch (chon)
		{
		case 1:
			cout << " Nhap so luong phan tu: ";
			cin >> n;
			Nhap(a, n);
			break;
		case 2:
			cout << " Xuat mang: " << endl;
			Xuat(a, n);
			cout << endl;
			break;
		case 3:
			cout << " Nhap vi tri can tim x: ";
			cin >> x;
			if (Tim(a, n, x, vt))
			{
				cout << "Tim thay gia tri " << x << " tai vi tri " << vt << endl;
			}
			else
				cout << " Khong tim thay gia tri cua " << x << endl;
			break;
		case 4:
			cout << " Mang dao nguoc: " << endl;
			daonguocmang(a, n);
			Xuat(a, n);
			break;
		case 5:
			cout << "Nhap vi tri muon xoa: ";
			cin >> p;
			Xoa(a, n, p);
			cout << " Mang da xoa: ";
			Xuat(a, n);
			break;
		case 6:
			cout << " Gia tri lon nhat cua mang: " << MAX(a, n) << " o vi tri: " << vt_max(a, n);
			break;
		case 7:
			cout << " Tung Binh Cong cua mang la: " << avg(a, n) << endl;
			break;
		case 8:
			timmax2(a, n);
			break;
		case 9:
			demsolantrungnhau(a, n);
			break;
		case 10:
			xoatrung(a, n);
			cout << " Mang sau khi xoa trung: ";
			Xuat(a, n);
			break;
		case 11:
			cout << " Thoat khoi MENU ^^ ";
			break;
		default:
			cout << " Nhap sai lua chon !!! Nhap lai: ";
			break;
			system("pause");
		}
	} while (chon != 11);
	return 0;
}


