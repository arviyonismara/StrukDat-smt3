#include <iostream>
//Praktikum 1 kasus 1
using namespace std;

int main()
{
    float ipk;
    cout<< "masukan IPK : "<< endl;
    cin>> ipk;
    if (ipk >= 3.50){
        cout<<"IPK : " << ipk << "Predikat adalah CUMLAUDE"<<endl;
    }
    else if (ipk >= 3.01 && ipk <= 3.49){
        cout<<"IPK : " << ipk << "Predikat adalah SANGAT MEMUASKAN"<<endl;
    }
    else if (ipk >= 2.50 && ipk <= 3.00){
        cout<<"IPK : " << ipk << "Predikat adalah MEMUASKAN"<<endl;
    }
    else if (ipk >= 2.00 && ipk <= 2.49){
        cout<<"IPK : " << ipk << "Predikat adalah CUKUP"<<endl;
    }
    else{
        cout<< "anda salah menginput"<<endl;
    }
    return 0;
}
