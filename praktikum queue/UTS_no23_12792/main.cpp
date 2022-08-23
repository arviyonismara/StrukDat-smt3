#include <iostream>

using namespace std;

int nilai_a,nilai_b;
int jumlah, kurang,kali;


void tambah();
void operasi();

void tambah(){
    if (nilai_a >= 0){
        jumlah = nilai_a + nilai_b;
        cout<<"jumlah : "<<jumlah<<endl;
    }
    else{
        kurang = nilai_a - nilai_b;
        cout<<"kurang : "<<kurang<<endl;
    }
}
void operasi(){
    if (nilai_a  >= 0){
        kali = nilai_a * nilai_b;
        cout<<"kali : "<<kali<<endl;
    }
}

int main()
{
    cout<<"masukan angka a: "<<endl;cin>>nilai_a;
    cout<<"masukan angka b: "<<endl;cin>>nilai_b;

    tambah();
    operasi();

}
