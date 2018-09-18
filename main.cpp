#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;
int lanzardado();
int main()
{
    srand(time(0));
    cout<<"Numero lanzado "<<lanzardado();
    return 0;
}
int lanzardado()
{
    int resultado;
    resultado=1+rand()%6;
    return resultado;
}