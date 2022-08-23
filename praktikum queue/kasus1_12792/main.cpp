#include <iostream>
#define Max 5

using namespace std;
//deklarasi komponen queue Array
int Qarr[Max];
int head;
int tail;


//deklarasi fungsi prototype
void inisialisasi(); //void jika tidak mengembalian nilai
int isEmpty();
void Enqueue(int);//tidak harus ada isinya
void Dequeue();
void cetak();

int main()
{
    cout << "program queue - Array" << endl;
    inisialisasi();
    Enqueue(5);
    Enqueue(10);
    Enqueue(15);
    Enqueue(20);
    cetak();
    return 0;
}

void inisialisasi(){
//atur kondisi queue dalam kondisi kosong
    head = -1;
    tail = -1;
}
int isEmpty(){
    //kondisi kosong atau tidak kosong
    if(tail == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void Enqueue(int nilai){
    //ada 2 kondisi yaitu
    //kondisi pertama: antrian masih kosong
    if (isEmpty() == 1){
        head = 0;
        tail = 0;
        Qarr[tail] = nilai;
        //cout<<"data masuk : "<< Qarr[tail]<<endl;
    }
    //kondisi kedua : antrian tidak kosong atau sudah ada antrian masuk
    else{
        tail++;
        Qarr[tail] = nilai;
    }
    //cout<<"data masuk : "<<Qarr[tail]<<endl;
}

void Dequeue(){
    //diijinkan untuk tidak mengecek konsidi queue koosng atau tidak
    int i;
    for(i=head; 1<=tail-1;i++){
        Qarr[i] = Qarr[i+1];
    }
    tail--;
}

void cetak(){
    int i;
    for(i=head; i<=tail;i++){
        cout<<"["<<Qarr[i]<<"]"<<" - ";
    }
    cout<<"\n";
}
/*#include <iostream>
#define Max 5

using namespace std;
//deklarasi komponen queue Array
int Qarr[Max];
int head;
int tail;


//deklarasi fungsi prototype
void inisialisasi(); //void jika tidak mengembalian nilai
int isEmpty();
void Enqueue(int);//tidak harus ada isinya
void Dequeue();
void cetak();

int main()
{
    cout << "program queue - Array" << endl;
    inisialisasi();
    Enqueue(5);
    cetak();
    return 0;
}

void inisialisasi(){
//atur kondisi queue dalam kondisi kosong
    head = -1;
    tail = -1;
}
int isEmpty(){
    //kondisi kosong atau tidak kosong
    if(tail == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void Enqueue(int input){
    //ada 2 kondisi yaitu
    //kondisi pertama: antrian masih kosong
    if (isEmpty() == 1){
        head = 0;
        tail = 0;
        Qarr[tail] = input;
        //cout<<"data masuk : "<< Qarr[tail]<<endl;
    }
    //kondisi kedua : antrian tidak kosong atau sudah ada antrian masuk
    else{
        tail++;
        Qarr[tail] = input;
    }
    //cout<<"data masuk : "<<Qarr[tail]<<endl;
}

void Dequeue(){
    //diijinkan untuk tidak mengecek konsidi queue koosng atau tidak
    int i;
    for(i=head; 1<=tail-1;i++){
        Qarr[i] = Qarr[i+1];
    }
    tail--;
}

void cetak(){
    int i;
    for(i=head; i<=tail;i++){
        cout<<"["<<Qarr[i]<<"]"<<" - ";
    }
    cout<<"\n";
}*/
