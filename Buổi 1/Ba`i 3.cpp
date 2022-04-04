#include <iostream.h>
int main()
{
	int n, S=1;
	cout << "\nNhap so n: ";
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		S =S * (2*i) ;
		cout << i << endl;
		
	}
	cout << "\nTich cua 2*4*6*...*2n = " << S << endl;
	return 0;
}