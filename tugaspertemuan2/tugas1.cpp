#include <iostream>

using namespace std;

int main()
{
    // MENGGUNAKAN NILAI VARIABLE TAMBAHAN
    // variabel thirdValue ialah variabel tambahan untuk menukar variabel firstValue ke secondValue dan secondValue ke firstValue
    int firstValue,secondValue, thirdValue;//memperkenalkan variabel
    firstValue = 10; //variabel pertama
    secondValue = 8; //variabel kedua

    cout<<"Cara pertama"<<endl;
    cout<<"Sebelum ditukar"<<endl;
    cout<<"First value = 10 "<<endl;//menampilkan firstValue adalah 10
    cout<<"Second value =  8"<< endl;//menampilkan secondValue adalah 8


    // Bertukar antara variabel
    thirdValue  = firstValue;//menukar variabel thirdValue menjadi variabel firstValue
    firstValue  = secondValue;//menukar variabel firstValue menjadi variabel secondValue
    secondValue = thirdValue;//menukar variabel secondValue menjadi variabel thirdValue

    // pertukaran nilai agar nilai firstValue ke secondValue dan nilai secondValue ke firstValue
    cout<<"\nSetelah ditukar \nFirst value = "<<firstValue<<endl;//menampilkan hasil jika firstValue adalah 8
    cout<<"Second value = "<<secondValue<<endl<<endl;//menampilkan hasil jika secondValue adalah 10


    //PERTUKARAN NILAI TANPA VARIABEL TAMBAHAN
    //reset nilai
    firstValue = 10;//variabel pertama
    secondValue = 8;//variabel kedua

    cout<<"cara kedua "<<endl;
    cout<<"Sebelum ditukar"<<endl;
    cout<<"First value = 10 "<<endl;//menampilkan firstValue adalah 10
    cout<<"Second value = 8 "<<endl<<endl;//menampilkan secondValue adalah 8

    //Bertukarnya antara variabel
    firstValue = firstValue + secondValue;//menjumlah  keduanya agar salah satu variabel bisa dikurang sehingga mendapat nilai salah satunya
    secondValue = firstValue - secondValue;//kurangi nilai fisrtValue dengan secondValue agar nilai dari second value nya berubah
    firstValue = firstValue - secondValue;// kurangi nilai firstValue yang baru dengan nilai secondValue baru sehingga tersisa nilai secondValue yang lama

    //pertukaran variabel
    cout<<"Sesudah ditukar"<<endl;
    cout<<"First value = "<<firstValue<<endl;//menampilkan hasil jika firstValue adalah 8
    cout<<"Second value = "<<secondValue<<endl;//menampilkan hasil jika secondValue adalah 10



return 0;
}
