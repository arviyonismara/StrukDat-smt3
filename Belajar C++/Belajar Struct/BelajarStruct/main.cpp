#include <iostream>

using namespace std;

struct Kampus{
    string namakampus;
    int tahun_berdiri;
};

struct Mahasiswa{
    //komponen / member
    string nama, jurusan;
    int tahun;
    Kampus kps;
    struct Alamatmhs{
        string jalan;
    }alamat;
    //deklarasi array
    string hobi[3];
}mhs1;//deklarasi variabel global


int main()
{

    //deklarasi variable struktur lokal
    Mahasiswa mhs2;
    //cara 1
    mhs1.nama = "Arve Arvearie Y";
    mhs1.jurusan = "Teknik Informatika";
    mhs1.tahun = 2019;
    mhs1.hobi[0] = "masak";
    mhs1.hobi[1] = "mancing";
    mhs1.hobi[2] = "nonton";
    mhs1.kps.namakampus = "universitas diponegoro";
    mhs1.kps.tahun_berdiri = 1979;
    mhs1.alamat.jalan = "jalan.sapta prasetya uts";

    cout<<"mahasiswa 1 nama: "<<mhs1.nama<<endl;
    cout<<"mahasiswa 1 jurusan: "<<mhs1.jurusan<<endl;
    cout<<"mahasiswa 1 tahun: "<<mhs1.tahun<<endl;
    cout<<"mahasiswa 1 hobi: "<<mhs1.hobi[0]<<" "<<mhs1.hobi[1]<<" "<<mhs1.hobi[2]<<"\n"<<endl;

    mhs2.nama = "Lucky Alma";
    mhs2.jurusan = "Teknik Informatika";
    mhs2.tahun = 2020;
    mhs2.hobi[0] = "bola";
    mhs2.hobi[1] = "badminton";
    mhs2.hobi[2] = "voli";

    cout<<"mahasiswa 2 nama: "<<mhs2.nama<<endl;
    cout<<"mahasiswa 2 jurusan: "<<mhs2.jurusan<<endl;
    cout<<"mahasiswa 2 tahun: "<<mhs2.tahun<<endl;
    cout<<"mahasiswa 2 hobi: "<<mhs2.hobi[0]<<" "<<mhs2.hobi[1]<<" "<<mhs2.hobi[2]<<"\n"<<endl;

    //cara 2
    //deklarasi variable structur lokal langsung di cetak
    Mahasiswa mhs3 = {"Devanda Radya", "ilu komunikasi", 2015, {"balapan","game", "basuketo"}};

    cout<<"mahasiswa 3 nama: "<<mhs3.nama<<endl;
    cout<<"mahasiswa 3 jurusan: "<<mhs3.jurusan<<endl;
    cout<<"mahasiswa 3 tahun: "<<mhs3.tahun<<endl;
    cout<<"mahasiswa 2 hobi: "<<mhs3.hobi[0]<<" "<<mhs3.hobi[1]<<" "<<mhs3.hobi[2]<<"\n"<<endl;


}
