#include <iostream>
//kasus 4 ke 2
using namespace std;
int MaxAB (int,int);

int main()
{
    //cout << "Hello world!" << endl;
    int x, y, z, result;
    x = 5;
    y = 4;
    //z = 10;
    result = MaxAB(x,y);
    //result = MaxAB(MaxAB(x,y),z);
    cout << "x : " << x <<endl;
    cout << "y : " << y <<endl;
    //cout << "z :" << z <<endl;
    cout << "hasilnya " << result << " terbesar" <<endl;
    return 0;
}

int MaxAB(int a, int b){
    int hasil;
    if (a > b) {
        hasil = a;
    }
    else{
        hasil = b;
    }
}
