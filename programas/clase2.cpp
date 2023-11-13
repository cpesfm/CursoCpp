#include<iostream>
using namespace std;

int main()
{
    int x=10; // (2^31 - 1) ~ -2,147,483,647 - 0 - 2,147,483,647
    cout<<"El valor guardado en x, es:"<<x<<endl;

    char c = 'i';
    cout<<"El valor guardado en c, es: "<<c<<endl;

    float y = 10.5689;
    cout<<"El valor guardado en y, es: "<<y<<endl;

    double d = 17.99999;
    cout<<"El valor guardado en d, es: "<<d<<endl;


    string f =  "Hola";
    cout<<f<<endl;

    bool b = 1;
    cout<<b<<endl;
    return 0;
}
