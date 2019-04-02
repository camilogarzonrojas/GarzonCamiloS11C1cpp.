#include<iostream>
using namespace std;

int main()
{
	int i;
	int contador=0;
	int numeros;

	for(int i=0;i<101;i++)
		{
			if(i%3==0 && i%5!=0)
				{
					cout<<i<<endl;
				}
		}
	
	return 0;
}
