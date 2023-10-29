#include <iostream>

using namespace std;

int main()
{
    // tugas no 2
    cout << "SELAMAT DATANG DI PEMBANDING ANGKA TEBESAR" << endl;
    cout << "Jika angka user berbentuk desimal maka gunakan titik {.} untuk mengganti koma"<<endl;
    float pertama, kedua, ketiga;
    // menggunakan float dikarenakan user bebas memasukan nilai dengan menggunakan desimal
    // input yang pertama
    cout<<"masukan angka pertama: ";
    cin >> pertama;
    // input yang kedua
    cout<<"masukan angka kedua: ";
    cin >> kedua;
    // imput yang ketiga
    cout<<"masukan angka ketiga: ";
    cin >> ketiga;

    // selanjutnya menggunakan logika && karena harus ada satu angka yang lebih besar dari yang lainnya
    if (pertama<kedua && pertama<ketiga){
       // menampilkan angka yang terbesar jika angka pertama lebih besar dari lainnya
       cout<<"n\angka terbesar yaitu:"<<pertama<<endl;
    }else if(kedua>pertama && kedua>ketiga){
       // menampilkan angka terbesar jika angka kedua lebih besar dari yang lainnya
       cout<<"n\angka terbesar yaitu:"<<kedua<<endl;
    }else if (ketiga<pertama && ketiga<kedua){
        // menampilkan angka terbesar jika angka ketiga lebih besar dari yang lainnya
        cout<<"n\Angka terbesar yaitu:"<<pertama<<endl;
    }else {
        cout<<"TERIMAKASIH BANYAK ATAS PERHATIANNYA";
    }

    return 0;
}
