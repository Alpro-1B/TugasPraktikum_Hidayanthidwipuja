#include <iostream>

using namespace std;
void functionPertama(int);
int main()
{
    cout <<" Masukan jumlah angka dalam deret Fibonacci: ";
    int n;
    cin>> n;
    int angkaSebelumnya = 0;
    int angkaSaatIni = 1;
    int angkaSelanjutnya;

void functionKedua(int n);
    cout << "Deret Fibonacci: ";
    cin >> n;

    for (int a = 0; a < n; a++){
    cout << angkaSebelumnya << " "; //  MENCETAK ANGKA SEBELUMNYA

    int angkaSelanjutnya = angkaSebelumnya + angkaSaatIni;
    angkaSebelumnya = angkaSaatIni;
    angkaSaatIni = angkaSelanjutnya;
    }
   return 0;
}

