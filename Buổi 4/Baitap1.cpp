#include<iostream.h>
#include<iomanip>
using namespace std;
class NGUOI
{
	private:
	char hoten[30];
	int namsinh;
	public:
		void nhap()
		{
			fflush(stdin);
			cout << "\nNhap vao ho ten :";
			cin.getline(hoten, 30);
			cout << "\nNhap vao nam sinh :";
			cin >> namsinh;
		}
		void xuat()
		{
			cout <<"\nHo va ten : " << hoten
				 <<"\nNam sinh : " << namsinh <<endl;
		}
	
};
class THISINH : public NGUOI 
{
	private:
		int sbd;
		float dt,dl,dh;
	public:
		void nhap()
		{
			NGUOI::nhap();
			cout << "\nNHap so bao danh :";
			cin >> sbd;
			cout << "\nNhap diem toan :"; 
			cin >> dt;
			cout << "\nNhap diem ly :";
			cin >> dl;
			cout << "\nNhap diem hoa :";
			cin >> dh;
		}
		
		float tongdiem()
		{
			return (dt+dl+dh)/3;
		}
		void xuat()
		{
			NGUOI::xuat();
			cout << "\nSo Bao danh: " <<sbd
			 	 << "\nDiem toan: " <<dt
				 << "\nDiem ly: " << dl
			  	 << "\nDiem hoa: " << dh
				 << "\nTong diem: "<< tongdiem();

		}
		long getsbd()
	 	{
 			return sbd;
 		}
		
		 
};
	void nhap_mang(THISINH ts[],int &n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<"\nNhap vao thi sinh thu " << i+1 << " : "<<endl;;
			ts[i].nhap();
		}
	}
	void xuat_mang(THISINH ts[],int &n)
	{
		for(int i=0 ; i<n ; i++)
		{
			ts[i].xuat();
		}
	}
	void tangdan(THISINH ts[],int &n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				if(ts[i].tongdiem() > ts[j].tongdiem())
				{
					THISINH tg = ts[i];
					ts[i] = ts[j];
					ts[j] = tg;
				}
			}
		}
		cout << "\n\t\t DANH SACH SAP XEP TANG DAN THEO TONG DIEM " << endl;
		xuat_mang(ts,n);
	}
	void timkiem(THISINH ts[],int &n)
	{
		nhapdulieu:
		int sbdtim;
		int dem = 0;
		cout << "\nNhap so bao danh can tim kiem :";
		cin >> sbdtim;
		cout << "\nTHI SINH VUA TIM KIEM : ";
		for(int i=0;i<n;i++)
		{
			if(ts[i].getsbd() == sbdtim)
			{
				ts[i].xuat();
				dem ++;
			}
		}
	if(dem == 0)
	{
		cout<<"\n KHONG TIM THAY SO BAO DANH " <<endl;
	}
}

int main()
{
	int n;
	cout << "\n Nhap so luong thi sinh : ";
	cin >> n;
	THISINH *ts = new THISINH[n] ;
	nhap_mang(ts,n);	
	tangdan(ts,n);
	timkiem(ts,n);
	return 0;
}