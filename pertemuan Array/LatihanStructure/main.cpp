#include <iostream>

using namespace std;

typedef struct mahasiswa {
    int nim, tahun;
    string nama, jurusan;
}emp;
int main(){
    emp data[5];
    int x;
    for(x=0;x<4;x++){
        cout<< "masukan nama: ";
        cin>> data[x].nama;
        cout<< "masukan nim: ";
        cin>> data[x].nim;
        cout<< "masukan jurusan: ";
        cin>> data[x].jurusan;
        cout<< "masukan tahun lulus: ";
        cin>> data[x].tahun;
    }
    cout << "NIM" << " " << "Nama" << " " << "jurusan" << " " << "tahun lulus"<<endl;
    for(x=0;x<4;x++){
        cout << data[x].nim <<" "<< data[x].nama <<" "<< data[x].jurusan <<" "<< data[x].tahun<<endl;
    }
}
