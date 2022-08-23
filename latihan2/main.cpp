#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << "Data Diri: " <<endl;
    /*
    char nama_mhs[30] = "Arvie Arvearie Yonismara";
    char Alamat[30] = "SPU VI semarang";
    int umur; //deklarasi
    umur = 19; //inisialisasi*/

    char nama_mhs[30];
    char tahun_lahir[30];
    char Alamat[30];
    int umur;

    cout<< "masukan nama anda :"; // perintah untuk print
    cin>>nama_mhs; //cin>> perintah untuk input

    cout<< "masukan tahun lahir anda :";
    cin>> tahun_lahir;

    cout<< "masukan alamat :";
    cin>>Alamat;

    cout<<"masukan umur anda :";
    cin>>umur;

    cout << nama_mhs <<","<<tahun_lahir<<","<< Alamat <<","<< umur <<endl;
    return 0;
}
