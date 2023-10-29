#include <iostream>

using namespace std;

int main()
{
    // tugas nomer 3
    int sisi, panjang, lebar, alas, tinggi;
    char luas;

    // memasukan input yang dapat digunakan oleh user

    cout<<"Buatlah perhitungan: Persegi, Persegi panjang, dan Segitiga"<<endl;
    cout<<"N\KETIK '1' agar mendapatkan perhitungan Persegi\n"<<endl;
    cout<<"KETIK '2' agar mendapatkan perhitungan Persegi panjang\n"<<endl;
    cout<<"KETIK '3' agar menapatkan perhitungan Segitiga\n"<<endl;

    cout<<"\nmenghitung luas bangun datar: ";cin>>luas;

    switch (luas){
    case '1':
         cout<<"Ingin menghitung Persegi\n"<<endl;
         cout<<"Masukan sisi: ";cin>>sisi;
         cout<<"Luas perseg: "<<sisi*sisi<<endl;
         break;
    cout<<"\nmenghitung luas persegipanjang: ";cin>>luas;
    case '2':
         cout<<"Menghitung Persegi panjang\n"<<endl;
         cout<<"Masukan panjang: ";cin>>panjang;
         cout<<"Masukan lebar: ";cin>>lebar;
         cout<<"Luas Persegi panjang: "<<panjang*lebar<<endl;
         break;
    case '3':
         cout<<"Menghitung Segitiga\n"<<endl;
         cout<<"Masukan Panjang: ";cin>>panjang;
         cout<<"Masukan Tinggi: ";cin>>tinggi;
         cout<<"Luas Segitiga: "<<0.5*panjang*tinggi<<endl;
         break;
    default:
        cout<<"berikut perhitungan dari luas bangun datar"<<endl;
        break;
    }
    return 0;
}
