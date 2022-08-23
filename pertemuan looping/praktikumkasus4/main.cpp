#include <iostream>

using namespace std;

int main()
{
    int i;
    int n;
    int j;
    cout<<"masukan jumlah n : "; cin>>n;
    for (i = n; i >= 1; i--){ //untuk membuat deret angka
        for (j = 1; j <= i; j++){ // untuk membuat spasi
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
