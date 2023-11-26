#include <iostream>

using namespace std;

int main()
{
    // selamat datang di perhitungan nilai tertinggi
    // tugas pertemuan ke6
    cout << "Selamat datang di perhitungan nilai tertinggi" << endl;
    int n;
    cout << "Banyaknya nilai n" << endl;  // memasukan variable n karena n bisa dimasukan angka brp saja
    cin >> n;
    int nilai[n];

    for (int a = 0; a < n; a++){
        cout << "masukkan nilai ke-" << a+1 << ": ";
        cin >> nilai[a];
    }


    cout << "Masukan Nilai Tertinggi"<< endl;  // memasukan nilai yang tertinggi
    for (int i = 0; i < n; i++){
        if (i+1 == n){
            cout << nilai[i];
        } else {
            if (nilai[i] > nilai[i+1]){
                nilai[i+1] = nilai[i];
                nilai[i] = nilai[i+1];
            }
        }
    }
    return 0;
}
