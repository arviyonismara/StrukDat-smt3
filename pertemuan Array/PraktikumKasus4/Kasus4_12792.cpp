#include <iostream>

using namespace std;

int main()
{
    //Kamus lokal
    float x,y,jumlah;

    //Algoritma
    x = 10;
    y = 20;
    float *ptrA = &x;
    float *ptrB = &y;

    x = 20.5;
    y = 30.5;
    jumlah = *ptrA + *ptrB;
    cout<<jumlah;

    return 0;
}
