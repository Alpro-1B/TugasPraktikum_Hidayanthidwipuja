#include <iostream>

using namespace std;
void batasangka();
void Bilanganganjil();
void Bilangangenap();
void Bilanganprima();


int angka;
int ganjil = 0;
int genap = 0;
int prima = 0;


int main()
{

    cout <<"\nMasukan batas angka: "; // MASUKAN  BATAS ANGKA DARI USER
    cin>>angka; // MASUKAN ANGKANYA SESUAI USER

    cout<<"Bilangan ganjil; ";  // MEMASUKAN VARIABLE BILANGAN GANJIL
    for (int a = 1; a <= angka; a++){
        if (a % 2 !=0){
            cout<<a<<" ";
            ganjil+=a;
        }
    }

    cout <<" Bilangan genap\n" <<endl;  // MEMASUKAN BILANGAN GENAP
    for (int b =1; b<= angka; b++){
        if (b % 2 == 0){
            cout <<b<<" ";
            genap++;
        }
    }
    cout<<"\n\nBilangan Prima: ";  // MEMASUKAN BILANGAN PRIMA
    for (int c = 2; c <= angka; ++c){
        int bilanganPrima = 1;
        for (int d = 2; d * d <= c; ++d){
            if (c % d == 0){
                bilanganPrima = 0;
                break;
                }
        }
        cout << "Jumlah bilagan ganjil dari angka 1 hingga\n" << angka << "adalah: " << ganjil;
    cout << "Faktor-faktor dari jumlah bilangan ganjil tersebut adalah:\n ";  // MEMFAKTORAN BILANGAN GANJIL
    for (int f = 1; f <= ganjil; f++){
        if (ganjil % f == 0){
            cout << f << " ";
        }
    }


    cout << "\nJumlah bilangan ganjil dari angka 1 hingga " << angka << " adalah: " << genap;
    cout << "\nFaktor- faktor dari jumlah bilangan ganjil tersebut adalah: ";  // MEMFAKTORAN BILANGAN GENAP
    for (int f = 1; f <= genap; f++){
        if (genap % f == 0){
            cout << f << " ";
        }
    }
}
    return 0;
    }
    void bilanganganjil(){
        cout << "\nJumlah bilangan ganjil dari angka 1 hingga " << angka << " adalah: " << prima;
    cout << "\nFaktor-faktor dari jumlah bilangan ganjil tersebut adalah: ";
    for (int f = 1; f <= prima; f++){

    }
    }
    void BilanganPrima(){
        cout<<"Bilangan Prima: "<<endl;
    for (int c = 2; c <= angka; ++c){
        int bilanganPrima = 1;
        if (bilanganPrima == 1){
            cout<<c<<" ";
            prima++;
        }
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
    }



