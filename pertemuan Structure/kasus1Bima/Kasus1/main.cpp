#include "header.h"

int main()
{
    cout << "Kasus 1-Lengkapi Program!" << endl;

    //tentukan deklarasi variabel n
    int n;
    cout << "Masukkan n: "; cin >> n;

    cout << "luas persegi adalah        : " << luas_persegi(n) <<endl;
    cout << "faktorial adalah           : " << fact(n) <<endl;
    cout << "bilangan terbesar adalah   : " << is_besar(n) <<endl;
    cout << "bilangan terkecil adalah   : " << is_kecil(n) <<endl;
    cout << "apakah n bilangan ganjil?  : " << is_ganjil(n) <<endl;
    cout << "apakah n bilangan genap?   : " << is_genap(n) <<endl;
    cout << "Bilangan integer positif   : " << to_positive(n) <<endl;
    cout << "bilangan integer negatif   : " << to_negative(n) <<endl;
    cout << "jumlah bilangan n          : " << sum_n(n) <<endl;
    cout << "rata-rata n                : " << avg_n(n) <<endl;
    return 0;
}
