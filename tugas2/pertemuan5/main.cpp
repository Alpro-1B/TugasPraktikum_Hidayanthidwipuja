#include <iostream>

using namespace std;
void functionPertama(int tinggi);
int main()
{
    // TUGAS NO 2
    // SELAMAT DATANG DI PEMPROGAMAN SEGITIGA SAMA SISI
    int tinggi;
    // MEMASUKAN TINGGI
    cout<<"Masukkan tinggi segitiga sama sisi:";
    // MEMASUKAN TINGGI SESUAI PERINTAH USER
    cin>>tinggi;
    functionPertama(tinggi);
 return 0;
}
void functionPertama(int tinggi){
    for(int a=1; a<=tinggi; a++){
        for(int j =1; j<=tinggi -a;j++){
            cout<<" ";
        }
        for(int k=1; k<=a;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}


