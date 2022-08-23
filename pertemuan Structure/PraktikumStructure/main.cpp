#include "Headers.h"

using namespace std;

int main()
{
    int x, y, total, total_kurang;
    //input x dan y
    cout<< "input x: "; cin>>x;
    cout<< "input y: "; cin>>y;
    cout<< "x : " << x <<endl;
    cout<< "y : " << y <<endl;

    //penampung hasil fungsi
    total = jumlah(x, y);
    total_kurang = kurangXY(x, y);

    //display hasil
    cout<< "total ; " << total << endl;
    cout<< "total ; " << total_kurang << endl;
    return 0;
}
