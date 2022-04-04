#include<iostream.h>
#include<iomanip.h> 
using namespace std;

class KH{
	private :
		char ht[30];
		struct NS{
				int ngay, thang , nam; 
		} ;
		NS ngaysinh;
		char cccd[10] ;
		char hokhau[50];
		
	public:
		void nhap() 
	 	{
 			cout<<"Nhap ho ten khach hang: ";
			cin.getline(ht,30);
			cout<<"Nhap ngay  :";
			cin>>ngaysinh.ngay;
			cout<<"Nhap thang :"; 
			cin>>ngaysinh.thang;
			cout<<"Nhap nam   :"; 
			cin>>ngaysinh.nam;
			fflush(stdin); 
			cout<<"Nhap can cuoc cong dan :";
			cin.getline(cccd,10);
			cout<<"Nhap vao ho khau thuong tru :";
			cin.getline(hokhau,50);
		 	fflush(stdin); 
 		}
 		void tieude()
	 	{
 			cout<<setw(15)<<"Ho ten"<<setw(20)
			 	<<setw(20)<<"Ngay Thang Nam"<<setw(20)
			 	<<setw(25)<<"Can cuoc cong dan "<<setw(20)
			 	<<setw(20)<<"Ho khau thuong tru"<<setw(20)<<endl; 
 		} 
 		void xuat()
 		{
 			tieude(); 
		 	cout<<setw(5)<<ht<<setw(20)
			 	<<setw(13)<<ngaysinh.ngay<<"/"<<ngaysinh.thang<<"/"<<ngaysinh.nam<<setw(20)
			 	<<setw(24)<<cccd<<setw(20)
			 	<<setw(20)<<hokhau<<setw(20)<<endl; 
	 	}

		void loc()
		{
			int a[100];
		 	int n;
			for(int i=0;i<n;i++)
				{
					if(ngaysinh.thang==12)
						 xuat() ;
					else
				 		cout<<"Vui long nhap lai."<<endl; 
				} 
		}
		 
};

int main()
{
	
	int n;
	cout << "\nNhap so luong khach hang: ";
	cin >> n;
	KH a[100];
	fflush(stdin);
	cout << "\nNHAP THONG TIN KHACH HANG: " << endl;
	for(int i = 0; i < n; i++)
	{
		cout << "Khach hang thu: "<< i+1 << endl;
		a[i].nhap();
	}
	cout << "DANH SACH KHACH HANG: " << endl;
	for(int i = 0; i<n ; i++)
	{
		cout << "Khach Hang thu: " << i+1 << endl;
		a[i].xuat();
	}
	for(int i = 0; i<n ; i++)
	{
		cout << "Danh sach khach hang sinh nhat thang 12:" << endl;
		a[i].loc();
	}
} 