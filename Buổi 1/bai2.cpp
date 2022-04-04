#include<iostream.h>
int main()
{
	int n, S=0;
	cout <<"\nNhap so dien tieu thu: ";
	cin >> n;
	if(n < 0){
		cout << "\nVui long nhap lai! " << endl;
	}
	else if(n > 0 && n <= 100)
	{
		S = n*2000;
		cout << "\nSo tien phai tra la: " <<  S << "dong" << endl;
	}
	else if(n >= 101 && n <= 200)
	{
		S = 100*200 + (n - 100)*2500 ;
		cout << "\nSo tien phai tra la: " <<  S << "dong" << endl;	
	}
	else if(n >= 201 && n <= 300)
	{
		S = 100*200 + 100*2500 + (n - 200)*3000 ;
		cout << "\nSo tien phai tra la: " <<  S << "dong" << endl;	
	}
	else 
	{
		S = 100*200 + 100*2500 + 100*3000 + (n - 300)*5000 ;
		cout << "\nSo tien phai tra la: " <<  S << "dong" << endl;
	}
	return 0;
}