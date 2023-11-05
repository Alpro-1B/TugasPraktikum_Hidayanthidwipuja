#include <iostream>

using namespace std;

int main()
{
    // SELAMAT DATANG DI PEMPROGAMAN SEGITIGA SAMA SISI
    // TUGAS NO 2
    int tinggi;
    cout<<" Masukan tinggi pirsmida: "; // MASUKAN VARIABLE TINGGI
    cin >> tinggi; // MASUKAN VARIABLE TINGGI SESUAI USER

    for(int a=1; a<=tinggi; a++){
        for(int j = 1; j<=tinggi -a;j++){
            cout << " ";
        }
        for(int k =1; k <+2*a-1;k++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
