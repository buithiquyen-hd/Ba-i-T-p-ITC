#include <iostream.h>

class SoPhuc{
	private://pham vi tuy xuat
		int pt, pa;
	public:
		void nhap()
		{
			cout << "\nNHap phan thuc: ";
			cin >> pt;
			cout << "\nNHap phan ao: ";
			cin >> pa;		
		}
		void in()
		{
			cout << "\nA = "<<pt<<"+"<<pa<<"*j"<<endl;
		}
		//getter(lay du lieu doi tuong)
		int getPA()
		{
			return pa;
		}
		int getPT()
		{
			return pt;
		}
		
};
int main(){
	SoPhuc a[2];
	for (int i = 0; i < 2; i++)
	{
		a[i].nhap();
	}
	cout << "\nTong cua hai so thuc vua nhap la: "
		<< a[0].getPT() + a[1].getPT()
		<< "+" << a[0].getPA() + a[1].getPA()
		<< "*j";
	cout << "\nHieu cua hai so thuc vua nhap la: "
		<< a[0].getPT() - a[1].getPT()
		<< "-" << a[0].getPA() - a[1].getPA()
		<< "*j";
	cout << "\nHieu cua hai so thuc vua nhap la: "
		<< a[0].getPT() * a[1].getPT()
		<< "+" << a[0].getPA() * a[1].getPA()
		<< "*j";
	
	return 0;
	
}