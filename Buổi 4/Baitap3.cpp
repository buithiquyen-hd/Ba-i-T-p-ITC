#include <iostream.h>
#include<iomanip>
using namespace std;
class AnPham
{
	protected:
		char ten[20];
		float giathanh;
	public:
		void nhap()
		{
			fflush(stdin);
			cout << "\nNhap ten : ";
			cin.getline(ten, 20);
			cout << "\nNhap gia thanh :";
			cin >> giathanh;
		}
		void xuat()
		{
			cout<<"\nTen: " << ten
				<<"\nGia thanh: " << giathanh << endl;
		}
};
class Sach : public AnPham
{
	private:
		int sotrang;
	public:
		void nhap()
		{
			AnPham::nhap();
			cout << "\nNhap so trang :";
			cin >> sotrang;
		}
		void xuat()
		{
			AnPham::xuat();
			cout << "\nSo trang: " << sotrang << endl;;	
		}
	int getsotrang()
	{
		return sotrang;
	}
};
class dia_CD : public AnPham
{
	private:
		float sophut;
	public:
		void nhap()
		{
			AnPham::nhap();
			cout << "\nNhap so phut :";
			cin >> sophut;
		}
		 void xuat()
		{
			AnPham::xuat();
			cout << "\nSo phut: " << sophut << endl;
		}
};

int main()
{
	int n;
	int luachon;	
	
	{
		cout<<"\n\t  1.SACH ";
		cout<<"\n\t	2.DIA CD "; 
		cout<<"\n\t	3.Thoat ";
		cout << "\nNhap vao lua chon : ";
		cin >> luachon;
		cin.ignore();
	}
		switch(luachon)
		{
			case 1:
			{
				cout<<"\nNhap vao so quan sach :";cin>>n;
				Sach *a = new Sach[n];
				for(int i=0;i<n;i++)
				{
					cout<<"\n - So sach thu ["<<i+1<<"] : \n";
					a[i].nhap();
				}
				cout<<"\n DANH SACH QUAN SACH VUA NHAP VAO LA \n";
				for(int i=0;i<n;i++)
				{
					a[i].xuat();
				}
				cout<<"\n QUAN SACH HON 500 TRANG LA \n";
				for(int i=0;i<n;i++)
				{
					if(a[i].getsotrang() > 500)
					{
						a[i].xuat();
					}
				}
				system("pause");
				break;
			}
			case 2:
			{
				cout<<"\nNhap vao so dia CD :";cin>>n;
				dia_CD *a = new dia_CD[n];
				for(int i=0;i<n;i++)
				{
					cout<<"\n - So dia CD thu ["<<i+1<<"] : \n";
					a[i].nhap();
				}
				cout<<"\n DANH SACH DIA CD VUA NHAP VAO LA \n";
				for(int i=0;i<n;i++)
				{
					a[i].xuat();
				}
				system("pause");
				break;
			}
			case 3:
			{
				cout<<"\nThoat ";
				system("pause");
				break;
			}
		}
	
	return 0;
}