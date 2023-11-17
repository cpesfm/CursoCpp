#include<iostream>
using namespace std;


// f(x) N ---> R
// f(2) |---> 2x

double f(double x);
int suma(int x,int y);
int resta(int a,int b);
int multiplicacion(int a,int b);
double division(double a,double b);

string hola(void);
void ejercicio1(void);
void ejercicio3(void);

int main(void)
{
    int x = suma(10,4);
    cout<<x<<endl;
    int y = multiplicacion(10,4);
    cout<<y<<endl;
    int z = resta(10,4);
    cout<<z<<endl;
    double a = division(10,4);
    cout<<a<<endl;
}

int multiplicacion(int a,int b)
{    return a*b;}

int resta(int a,int b)
{   return a-b;}

double division(double a,double b)
{   return a/b;}

int suma(int x,int y)
{    return x+y;}

double f(double x)
{
    return 2*x;
}

string hola(void)
{
    string aux = "Hola mundo!";

    return aux;
}

void ejercicio3(void)
{
    int edad;
    char sexo;
    double altura;
    cin>>edad>>sexo>>altura;
    cout<<"\nEdad: "<<edad<<"\nSexo: "<<sexo<<"\nAltura: "<<altura;
}

void ejercicio1()
{
    double a,b;
    cin>>a>>b;
    cout<<"\nSuma: "<<a+b<<"\nMultiplicación: "<<a*b<<"\nResta: "<<a-b<<"\nDivisión: "<<a/b;
}
