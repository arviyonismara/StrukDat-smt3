#include <iostream>

using namespace std;

void PassByRederence(int *b){
    cout << "  Nilai dari b : " << *b+5 << endl;
    cout << "Address from b : " << b << endl << endl;
}

void PassByValue(int x){
    cout << "  Nilai dari x : " << x << endl;
    cout << "Address from x : " << &x << endl << endl;
}

int main()
{
    int a = 15;

    system("cls");
    // value and address
    cout << "  Nilai dari a : " << a << endl;
    cout << "Address from a : " << &a << endl << endl ;

    PassByRederence(&a);
    PassByValue(a);

    cout << "Hasil dari a kuadrat adalah: " << a*a << endl;
    return 0;
}
