#include <iostream>

using namespace std;

int main()
{
    //code untuk menampilkan deret dan menurun sesuai jumlah deret.
    int i;
    int n;
    int j;
    cout<<"masukan n : "; cin>>n;
    for (i = 1; i <= n; i++){ //untuk perhitungan baris
        for (j = 1; j <= n; j++){ // untuk perhitungan kolom
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
