#include <iostream>

using namespace std;

typedef struct mahasiswa
{
    string nama[4];
    string NIM[4];
    string jurusan[4];
    int tahun_lulus[4];
}emp;

int main()
{
    emp mhs;
    int jumlah = 2;
    system("cls");
    for (int i = 0; i < jumlah; i++)
    {
        cout << "======== INPUT DATA MAHASISWA KE-"<< i+1 << " ========"<< endl;
        cout << "Masukan nama mahasiswa ke-" << i+1 << " : ";
        cin >> mhs.nama[i];
        cout << "Masukan Nim mahasiswa ke-" << i+1 << " : ";
        cin >> mhs.NIM[i];
        cout << "Masukan jurusan mahasiswa ke-" << i+1 << " : ";
        cin >> mhs.jurusan[i];
        cout << "Masukan tahun lulus mahasiswa ke-" << i+1 << " : ";
        cin >> mhs.tahun_lulus[i];
        cout << endl << endl;
    }

    system("cls");
    cout << endl << endl;
    for (int i = 0; i < jumlah; i++)
    {
        cout << "======== DATA MAHASISWA KE-"<< i+1 << " ========"<< endl;
        cout << "nama mahasiswa : ";
        cout << mhs.nama[i] << endl;
        cout << "Nim mahasiswa : ";
        cout << mhs.NIM[i] << endl;
        cout << "jurusan mahasiswa : ";
        cout << mhs.jurusan[i] << endl;
        cout << "tahun lulus mahasiswa : ";
        cout << mhs.tahun_lulus[i] << endl;
        cout << endl << endl;
    }
    return 0;
}
