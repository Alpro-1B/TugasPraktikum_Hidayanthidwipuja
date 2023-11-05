#include <iostream>

using namespace std;

int main()
{
    int angka;
    int ganjil = 0;
    int genap = 0;
    int prima = 0;
    cout <<"\nMasukan batas angka: ";
    cin>>angka;

    cout<<"Bilangan ganjil; ";
    for (int a = 1; a <= angka; a++){
        if (a % 2 !=0){
            cout<<a<<" ";
            ganjil+=a;
        }
    }
    cout << "Jumlah bilagan ganjil dari angka 1 hingga\n" << angka << "adalah: " << ganjil;
    cout << "Faktor-faktor dari jumlah bilangan ganjil tersebut adalah:\n ";
    for (int f = 1; f <= ganjil; f++){
        if (ganjil % f == 0){
            cout << f << " ";
        }
    }

    cout <<" Bilangan genap\n" <<endl;
    for (int b =1; b<= angka; b++){
        if (b % 2 == 0){
            cout <<b<<" ";
            genap++;
        }
    }
    cout << "\nJumlah bilangan ganjil dari angka 1 hingga " << angka << " adalah: " << genap;
    cout << "\nFaktor- faktor dari jumlah bilangan ganjil tersebut adalah: ";
    for (int f = 1; f <= genap; f++){
        if (genap % f == 0){
            cout << f << " ";
        }
    }
    cout<<"\n\nBilangan Prima: ";
    for (int c = 2; c <= angka; ++c){
        int bilanganPrima = 1;
        for (int d = 2; d * d <= c; ++d){
            if (c % d == 0){
                bilanganPrima = 0;
                break;
                }
        }
        if (bilanganPrima == 1){
            cout<<c<<" ";
            prima++;
        }
    }
    cout << "\nJumlah bilangan ganjil dari angka 1 hingga " << angka << " adalah: " << prima;
    cout << "\nFaktor-faktor dari jumlah bilangan ganjil tersebut adalah: ";
    for (int f = 1; f <= prima; f++){

    }
    cout<<"Bilangan Prima: "<<endl;
    for (int c = 2; c <= angka; ++c){
        int bilanganPrima = 1;
        for (int d = 2; d * d <= c; ++d){
            if (c % d == 0){
                break;
                }
        }
        if (bilanganPrima == 1){
            cout<<c<<" ";
            prima++;
        }
    }
    cout << "\nJumlah bilangan ganjil dari angka 1 hingga " << angka << "adalah: " << prima;

    cout << "\nFaktor-faktor dari jumlah bilangan ganjil tersebut adalah: "<<endl;
    for (int f = 1; f <= prima; f++){
        if (prima % f == 0){
            cout << f << " ";
        }
    }
    return 0;
}
