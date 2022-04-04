#include <iostream.h>
int main()
{
	int n;
	cout <<"\nNhap thu : ";
	do
	{
		cin >> n;
		if(n < 1 || n > 7)	
		{
			cout <<"\nVui long nhap lai ! "	<< endl;
		}
	}while(n < 1 || n > 7);
	if(n = 1){
		cout <<"\nSunday." << endl;
	}
	else if(n = 2){
		cout <<"\nMonday." << endl;
	}
	else if(n = 3){
		cout <<"\nTuesday." << endl;
	}
	else if(n = 4){
		cout <<"\nWednesday." << endl;
	}
	else if(n = 5){
		cout <<"\nThursday." << endl;
	}
	else if(n = 6){
		cout <<"\nFriday." << endl;
	}
	else 
		cout <<"\nSaturday." << endl;
	
	return 0;
		
}