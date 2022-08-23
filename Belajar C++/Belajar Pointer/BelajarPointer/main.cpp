#include <iostream>

using namespace std;

int main()
{
    int nilai = 5;
    //untuk mengetahui alamat dari variabel nilai menggunakan &
    cout <<"alamatnya adalah : "<< &nilai<<"\n"<<endl;

    //membuat variabel pointer
    //cara 1
    int *value1; //membuat variabel pointer menggunakan *
    value1 = &nilai; //mengambil alamat(refrensi) dari variabel "nilai" untuk variable pointer value1
    //cara 2
    int *value2 = &nilai;//mengambil alamat(refrensi) dari variabel "nilai" untuk variable pointer value2

    cout<<"alamat value1 = "<<value1<<endl;//mencetak alamat pada value1 yang diambil dari int nilai
    cout<<"nilai value1 = "<<*value1<<endl;//mencetak nilai pada value1 yang diambil dari int nilai
    cout<<"alamat value2 = "<<value2<<endl;//mencetak alamat pada value2 yang diambil dari int nilai
    cout<<"nilai value2 = "<<*value2<<"\n"<<endl;//mencetak nilai pada value2 yang diambil dari int nilai

    //manipulasi variable pointer
    *value1 = 10;
    cout<<"nilai dari value1 sekarang = "<<*value1<<endl;
    cout<<"nilai dari 'nilai' sekarang = "<<nilai<<"\n"<<endl;

    //coba perhitungan
    *value1 +=6;
    cout<<"nilai dari value1 sekarang = "<<nilai<<endl;
    (*value1)++;
    cout<<"nilai dari value1 sekarang = "<<nilai<<endl;
}
