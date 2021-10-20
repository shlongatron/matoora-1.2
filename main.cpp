#include <iostream>
using namespace std;

int main() 
{
	int n;
	cout<<"Podaj liczbe"<<endl;
	cin>>n;

	int suma = 0;
	int liczba = n;
	while(liczba>0)
	{
		liczba = liczba/10;
		suma = suma*10 + 9;

	}
	int d = suma-n;
	cout<<"dopelnienie: "<<d<<endl;
	
	return 0;
}
