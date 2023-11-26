#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int aux,aux2 = 1;

    for(int i=0;i<=3;i++)
    {
        aux =  pow((pow(i,3)+2),2);
        aux2 = aux2 * aux;
    }

    cout<<endl<<aux2;

    return 0;
}

