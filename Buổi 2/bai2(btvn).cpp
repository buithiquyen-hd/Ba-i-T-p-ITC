#include<iostream.h>
class GV{
	private : 
		char ht[30];
		int t;
		char bc[15];
		char chuyennganh[20];
		float bl, lcb;
	public :
		void nhap()
		{
			cout << "\nNhap ho ten giao vien: ";
			cin.getline(ht, 30);
			cout << "\nNhap tuoi: ";
			cin >> t;
			cout << "\nNhap bang cap: ";
			cin.getline (bc, 15);
			cout << "\nNhap chuyen nganh: ";
			cin.getline(chuyennganh, 20);
			cout << "\nNhap bac luong: ";
			cin >> bl;
			fflush(stdin);
			
		}
		void Tinhtien()
		{
			lcb = bl * 610;
		}
		void xuatds()
		{
			cout << "\nGiao vien: " << ht
				 << "\nTuoi:  " << t
				 << "\nBang cap: " << bc
				 << "\nChuyen nganh: " << chuyennganh
				 << "\nTien luong: " << lcb <<endl;
		}
		void inds()
		{	
			if(lcb < 2000)
			{
				xuatds();
			}
		}
};
int main()
{
	int n;
	cout << "\nNhap so luong giao vien: ";
	cin >> n;
	GV a[n];
	fflush(stdin);//cin.ognore
	cout << "\nNHAP THONG TIN GIAO VIEN: " << endl;
	for(int i =0; i < n; i++)
	{
		cout << "\nGiao vien thu: "<< i+1 << endl;
		a[i].nhap();
	}
	cout << "\nDANH SACH GIAO VIEN: " << endl;
	for(int i =0; i<n;i++)
	{
		cout << "\nGiao vien thu: " << i+1 << endl;
		a[i].xuatds();
	}
	cout << "\nDANH SACH GIAO VIEN LUONG NHO 2000:" << endl;
	for(int i =0; i<n;i++)
	{
		a[i].inds();
	}

	
}