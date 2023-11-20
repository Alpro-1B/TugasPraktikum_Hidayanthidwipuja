#include <iostream>

using namespace std;

int main()
{

// tugas nomor 2
    // memperkenalkan variable
    int jumlahTeman,jumlahBebek,sisaBebek;

    cout << "Masukan jumlah bebek pak tatang = ";
    // meminta user untuk meminta input jumlah bebek
    cin>>jumlahBebek;
    cout<< "Masukan jumlah teman pak tatang = ";
    // meminta user memasukkan input jumlah teman
    cin>>jumlahTeman;

    // menampilkan jumlah bebek yang dibagi kepada teman pal tatang
    cout<<"\n\nSetiap teman pak tatang akan mendapatkan = " << jumlahBebek/jumlahTeman <<" ekor bebek" <<endl<<endl;
    // menampilkan sisa bebek yang tidak habis terbagi
    cout<<"Setelah semua bebek dibagikan masih tersisa bebek pak tatang sejumlah = " <<(jumlahBebek % jumlahTeman)<<" ekor bebek" <<endl;

return 0;
}

