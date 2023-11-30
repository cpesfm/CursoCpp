#include<iostream>
using namespace std; 

void hola(void)
{
	int n;
	cout<<"Hola mundo!"<<endl;
	cin>>n;
}

int main()
{
	char c='s'; 
	
	while(c == 's' || c == 'S')
	{
		hola();
	
	
		system("clear");
		cout<<"Desea repetir el programa? s/n ";
		cin>>c;
	}
}
