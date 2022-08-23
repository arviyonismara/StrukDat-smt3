#include <iostream>

using namespace std;

int main()
{
    // var biasa
    int iNumber;

    cout << "Masukkan nilai integer: ";
    cin >> iNumber;
    cout << "Nilai iNumber: " << iNumber << endl;

    // var pointer
    int *iPtr = &iNumber;
    cout << "Nilai iPtr: " << *iPtr << endl;

    // address
    cout << "iNumber: " << &iNumber << endl;
    cout << "iPtr: " << &iPtr << endl;

    return 0;
    return 0;
}
