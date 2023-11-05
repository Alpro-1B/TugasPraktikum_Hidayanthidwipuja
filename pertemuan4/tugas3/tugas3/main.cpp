#include <iostream>

using namespace std;

int main()
{
    // SELAMAT DATANG DI PEMPROGAMAN DERET FIBONACCI
    // TUGAS NO 3
    int n;
    cout <<" Masukan jumlah angka dalam deret Fibonacci: "; // MAMASUKAN VARIABLE
    cin >> n; // MASUKAN VARIABLE SESUAI USER

    int angkaSebelumnya = 0;
    int angkaSaatIni = 1;
    int angkaSelanjutnya;

    cout << "Deret Fibonacci: ";
    for (int a = 0; a < n; a++){
        cout << angkaSebelumnya << " "; //  MENCETAK ANGKA SEBELUMNYA

        int angkaSelanjutnya = angkaSebelumnya + angkaSaatIni;
        angkaSebelumnya = angkaSaatIni;
        angkaSaatIni = angkaSelanjutnya;
    }
    return 0;
}
