#include <iostream>

using namespace std;

int main()
{
    cout << "Kasus-2 Hitung Karakter" << endl;

    int vokal, konsonan, v, k;
    vokal = konsonan = v = k = 0;
    char arr_vokal[10], arr_konsonan[10];
    // char kata;
    string kata;

    cout << "Masukkan string: ";
    cin >> kata;
    // getline(cin, kata);

    for(int i=0;i<kata.length();i++){
        if(kata[i]=='a' || kata[i]=='i' || kata[i]=='u' || kata[i]=='e' || kata[i]=='o')
        {
            vokal++;
            arr_vokal[v] = kata[i];
            v++;
        }
        else{
            konsonan++;
            arr_konsonan[k] = kata[i];
            k++;
        }
    }

    cout << "Jumlah huruf vokal: " << vokal << endl;
    cout << "Yaitu: " << arr_vokal << endl;

    cout << "\nJumlah huruf konsonan: " << konsonan << endl;
    cout << "Yaitu: " << arr_konsonan << endl;
    return 0;
}
