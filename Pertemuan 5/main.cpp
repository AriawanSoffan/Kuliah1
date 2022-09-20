#include <iostream>

using namespace std;

int main()
{
    float x;
    float y;
    float z;
    int opsi;
    menu:
    cout<< "Pilih soal yang akan dipecahkan"<<endl;
    cout<< "Luas lingkaran ketik 1"<<endl;
    cout<< "Luas persegi panjang ketik 2"<<endl;
    cout<< "Untuk keluar ketik 3"<<endl<<endl;

    cout<< "Pilih : " ;
    cin>>opsi;
    if(opsi==1){
        cout <<"Jari Jari : ";
        cin >> x;
        cout <<"Luas Lingkaran : " << x*x*22/7<<endl<<endl;
        goto menu;
    }
    else if(opsi==2){
        cout <<"Panjang : ";
        cin >> y;
        cout<<"lebar : ";
        cin >> z;
        cout<<"Luas Persegi Panjang : " <<y*z<<endl<<endl;
        goto menu;
    }
        else if(opsi==3){
        }
        else {
        cout<<"pilihannya 1,2 dan 3 doang bos, pilih lagi"<<endl<<endl;
        goto menu;
        }

    return 0;
}
