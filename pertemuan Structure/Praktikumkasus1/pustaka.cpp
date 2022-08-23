#include "header.h" //include header file yang dibuat

int luas_persegi(int n){
    //mengembalikan nilai hasil perkalian n * n
    return n*n;
}
int fact(int n){
    //mengembalikan nilai factorial dari n
     int bil;
     long fact = 1;

     for(bil=1; bil<=n; bil++){
      fact = fact * bil;
     }
     return fact;
    }
int is_besar(int n){
    //cetak urutan bilangan hingga batas n
    //tampilkan bilangan terbesar dari urutan tersebut
    for(int i=n; i>1; i--){
        cout << i << " ";
    }
}
int is_kecil(int n){
    //cetak urutan bilangan hingga batas n
    //tampilkan bilangan terkecil dari urutan tersebut
    for(int i=1; i<n; i++){
        cout << i << " ";
    }
}
int is_ganjil(int n){
    //true jika n adalah bilangan ganjil, false sebaliknya
    if(n%2!=0){
        return true;
    }
    else{
        return false;
    }
}
int is_genap(int n){
    //true jika n adalah bilangan genap, false sebaliknya
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}
int to_positive(int n){
    //ubah bilangan n ke positive integer
    if(n>0){
        return n;
    }
    else{
        return n+n+n;
    }
}
int to_negative(int n){
    //ubah bilangan n ke negative integer
    if(n<0){
        return n;
    }
    else{
        return n-n-n;
    }
}
int sum_n(int n){
    //tampilkan urutan bilangan hingga batas n
    //mengembalikan hasil penjumlahan dari deret bilangan n
    int jumlah;
    for(int i=1; i<=n; i++){
        //body of loop
        cout << i << " "; //statement
        jumlah += i;
    }
    cout << "Jumlah: ";
    return jumlah;
}
int avg_n(int n){
    //mengembalikan rata – rata dari penjumlahan deret bilangan n
    //hint: sum_n/n
    int sum_n;
    for(int i=1; i<=n; i++){
        sum_n += i;
    }
    return sum_n/n;
}
