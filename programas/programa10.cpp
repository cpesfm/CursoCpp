#include<iostream>
using namespace std;

int main()
{
	char c;
	do
	{
		system("clear");

		for(int i=0; i<10; i++)
			cout<<i<<endl;

		cin>>c; 
	}while(c == 's' || c=='S');
}
