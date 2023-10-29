#include <iostream>

using namespace std;

int main()
{
    // soal nomor 1

    int nilai;
    string masukanNama;
    string masukanNpm;

    cout<<"Masukan nama :";
    cin>>masukanNama;
    cout<<"masukan Npm:";
    cin>>masukanNpm;
    cout<<"masukan nilai:";
    cin>>nilai;

    if (nilai>90){
    cout<<"Selamat anda mendapatkan nilai A" <<endl;
    } else if (nilai>80){
    cout<<"Selamat anda mendapatkan nilai B"<<endl;
    } else if (nilai>70){
    cout<<"Anda mendapatkan nilai C"<<endl;
    } else if (nilai>60){
    cout<<"Anda mendapatkan nilai D"<<endl;
    } else {
    cout<<"Anda mendapatkan nilai E"<<endl;
    }

    return 0;
}
