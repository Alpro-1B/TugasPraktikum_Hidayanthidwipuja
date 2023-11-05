#include <iostream>

using namespace std;

int main()
{
    // TUGAS NO 2
    // SELAMAT DATANG DI PEMPROGAMAN SEGITIGA SAMA SISI
    int tinggi;
    // MEMASUKAN TINGGI
    cout<<"Masukkan tinggi segitiga sama sisi:";
    // MEMASUKAN TINGGI SESUAI PERINTAH USER
    cin>>tinggi;

    // MASUKAN VARIABLE
    for(int a=1; a<=tinggi; a++){
        for(int j =1; j<=tinggi -a;j++){
            cout<<" ";
        }
        for(int k=1; k<=2*a-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
