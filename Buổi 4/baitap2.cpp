#include <iostream>
#include<iomanip>
using namespace std;
class SanPham
{
	private:
		char masp[20];
		char tensanpham[30];
		int namsx;
	public:
		void nhap()
		{
			fflush(stdin);
			cout << "\nNhap vao ma san pham : ";
			cin.getline(masp, 20); 
			cout << "\nNhap vao ten san pham : ";
			cin.getline(tensanpham, 30);
			cout << "\nNhap vao nam san xuat :";
			cin >> namsx;
		}
		void xuat()
		{
			cout << "\nMa san pham: " << masp
				 << "\nTen san pham: " << tensanpham
				 << "\nNam san xuat: " << namsx << endl;
		}
	
};
class TiVi : public SanPham
{
	private:
		float cdai,crong;
	public:
		void nhap()
		{
			SanPham::nhap();
			cout << "\nNhap chieu dai tivi :";
			cin >> cdai;
			cout << "\nNhap chieu rong tivi :";
			cin >> crong;
		}
		float dientich()
		{
			return cdai * crong;
		}
		void xuat()
		{
			SanPham::xuat();
			cout << "\nChieu dai: " << cdai << " cm"
				 << "\nChieu rong: " << crong << " cm"
				 << "\nDien tich: " << dientich()<< " cm^2";
		}
};
void nhap_tivi(TiVi a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout << "\nNhap vao TiVi thu "<< i+1 << " : " << endl;
		a[i].nhap();
	}
}
void xuat_tivi(TiVi a[],int &n)
{
	
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
	}
}
void sapxep(TiVi a[],int &n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		{
			if(a[i].dientich() > a[j].dientich())
			{
				TiVi tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	cout << "\n\t\t DANH SACH SAP XEP TANG THEO DIEN TICH " << endl;
	xuat_tivi(a,n);
}
int main()
{
	int n;
	cout << "\nNhap vao so luong san pham: ";
	cin >> n;
	TiVi *sp = new TiVi[n];
	nhap_tivi(sp,n);
	cout << "\n\t\t DANH SACHTIVI VUA NHAP LA " << endl;
	xuat_tivi(sp,n);
	sapxep(sp,n);
	return 0;
}