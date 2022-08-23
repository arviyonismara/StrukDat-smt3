#include <iostream>
#define max 5
using namespace std;

int main()
{
    int *ptr = new int[max];

    for (int i=0; i < max; i++){
        cin>> ptr[i];
    }

    ptr[2] = 100;
    int *ptrarr2 = &ptr[2];
    *ptrarr2 = 100;

    for (int i=0; i < max; i++){
        cout<< ptr[i]<<" ";
    }

    return 0;
}

