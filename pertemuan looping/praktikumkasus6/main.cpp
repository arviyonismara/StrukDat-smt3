#include <iostream>

using namespace std;

int main()
{
    int number = 7;
    int tebak;

    // lakukan do terlebih dahulu jika kondisi masih di While(number != tebak)
    do{
        cout<<"masukan tebak angka : "; cin>>tebak;
        if(tebak > number){
            cout<<"tebakan anda terlalu besar!"<<endl;
        }
        else{
            if (tebak != number){
                cout<<"tebakan anda terlalu kecil!"<<endl;
            }
        }
    }
    while (number != tebak);
    cout<<"Selamat anda berhasil menebak sebuah angka yaitu angka "<<number<<endl;
    cout<<"Permainan telah selesai"<<endl;
    return 0;
}
