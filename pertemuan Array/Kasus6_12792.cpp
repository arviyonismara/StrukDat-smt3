#include <iostream>

using namespace std;

int main()
{
    const char *p = "Hello";

    // while(*p++)
    //     cout << *p++;
    // Kesimpulan : Akan ada var yang dikhianati atau di tinggal karena efek samping dari posfix

    // while(*p++)
    //     cout << ++p;
    // Kesimpulan : Hanya dua elemen terakhir yang di loop 2 kali

    while(*p++)
        cout << *(++p);
    // Kesimpulan : Hanya dua element terakhir yang di tampilkan tanpa looping



    return 0;
}
