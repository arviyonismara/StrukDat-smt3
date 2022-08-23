#include <iostream>

using namespace std;

int main()
{
    int number = 7;
    int tebak;
    int chance = 3;

    // lakukan do terlebih dahulu jika kondisi masih di While(number != tebak)
    do{
        cout<<"masukan tebak angka : "; cin>>tebak;
        if(tebak > number){
            cout<<"tebakan anda terlalu besar!"<<endl;
            chance = chance - 1;
            if (chance == 0){
                cout<<"tebakan anda sudah habis"<<endl;
                cout<<"anda tidak berhasil memenangkan permainan"<<endl;
                break;
            }
        }
        else if (tebak != number){
            cout<<"tebakan anda terlalu kecil!"<<endl;
            chance = chance - 1;
            if (chance == 0){
                cout<<"tebakan anda sudah habis"<<endl;
                cout<<"anda tidak berhasil memenangkan permainan"<<endl;
                break;
            }
        }
        else
            goto win;

    }
    while (number != tebak);
    win:
        cout<<"Selamat anda berhasil menebak sebuah angka yaitu angka "<<number<<endl;
    cout<<"Permainan telah selesai"<<endl;

    return 0;
}
