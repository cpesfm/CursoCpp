#include<iostream>
using namespace std;

void menu(void);

int main()
{
	menu();
	return 0;
}

void menu(void)
{
	cout<<" 1.- Suma \n 2.- Resta \n 3.- Multiplicacion \n 4.- Division"<<endl;
	int x;
	cin>>x;
	if(x == 1 )
	{
		int a,b;
		cin>>a;
		cin>>b;
		cout<<endl<<a+b;
	}
	if(x == 2)
	{
		int a,b;
		cin>>a;
		cin>>b;
		cout<<endl<<a-b;
	}
	if(x == 3)
	{
		int a,b;
                cin>>a;
                cin>>b;
                cout<<endl<<a*b;
	}
	if(x == 4)
	{
		float a,b;
                cin>>a;
                cin>>b;
                cout<<endl<<a/b;
	}
}
