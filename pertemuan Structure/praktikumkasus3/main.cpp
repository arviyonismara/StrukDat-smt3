#include <iostream>

using namespace std;

struct nilai{
    int x,y;
    int a,b;
};

int main(){
    typedef struct nilai operasi;
    operasi jumlah;
    operasi kurang;
    int x , y;
    cout<<"input x: "; cin>> x;
    cout<<"input y: "; cin>> y;
    jumlah.a = x + y;
    kurang.b = x - y;
    cout<<"jumlah: "<<jumlah.a <<endl;
    cout<<"kurang: "<<kurang.b <<endl;
}

// cara lucky
/*typedef struct
{
    int x;
    int y;
}nilai;


int main(){
    typedef nilai mhs;
    mhs n1;

    cout << "Input X value : ";
    cin >> n1.x;
    cout << "Input Y value : ";
    cin >> n1.y;

    cout << "Nilai dari  X adalah " << n1.x << " nilai dengan Y adalah " << n1.y << endl;

    return 0;
}
*/
