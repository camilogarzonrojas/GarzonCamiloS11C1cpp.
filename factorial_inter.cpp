#include<iostream>
using namespace std;

int main()
{
	int i;
	int factorial=1;
	int numero;
	cout<<"Ingrese un numero ";
	cin>>numero;
	
	for(int i=1; i<=numero; i++)
	{
		factorial*=i;
	}
	cout<<factorial<<endl;
	return 0;
}
