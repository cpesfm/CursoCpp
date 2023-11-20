#include<iostream>
using namespace std;

void verdadero(void)
{
	cout<<"La afirmacion es verdadera"<<endl;
}

void falso(void)
{
	cout<<"La afirmacion es falsa"<<endl;
}

int main()
{
	int x,y=9;
	cin>>x;

	if(x == y)
	{
		verdadero();
	}

	else
	{
		falso();
	}
			
	cout<<"El programa finalizo"<<endl;
	
	return 0;
}
