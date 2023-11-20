#include<iostream>
using namespace std;

void hola(void)
{
    cout<<"Hola mundo!";
}

void menu(void)
{
    cout<<"          Menu: "<<endl;
    cout<<" _____________________"<<endl;
    cout<<"|  1.- Opcion 1       |"<<endl;
    cout<<"|  2.- Opcion 2       |"<<endl;
    cout<<"|  3.- Opcion 3       |"<<endl;
    cout<<" _____________________"<<endl;
}

void menu2(void)
{
    cout<<"          Menu:\n ______________________\n|   1.- Opcion 1       |\n|   2.-Opcion 2        |\n|   3.- Opcion 3       |\n ______________________"<<endl;
}



int main(void)
{
    /*hola();
    cout<<endl;
    hola();
    cout<<endl;
    hola();*/

    menu();
    cout<<endl<<endl;
    menu2();

    return 0;
}
