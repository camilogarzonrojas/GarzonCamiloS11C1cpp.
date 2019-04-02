#include<iostream>
using namespace std;

int main()
{
	int n=7;
	int i;
	int factorial=1;
	
	for(int i=1; i<=n; i++)
	{
		factorial*=i;
	}
	cout<<factorial<<endl;
	cout<<"Al tomar n=77 el factorial da 0."<<endl;
	
	return 0;
}
