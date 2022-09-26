#include <iostream>

using namespace std;

int main()
{

    int opsi;

    string Jurusan;


        cout<<"Masukkan Jurusan Anda"<<endl<<endl;
        cout<<"1. Teknik Informatika "<<endl;
        cout<<"2. Sistem Informasi"<<endl;
        cout<<"3. Desain Komunikasi Visual"<<endl<<endl;

    cout<<"Pilih : ";
    cin>>opsi;
    cout<<endl;

    if(opsi==1){
    Jurusan="Teknik Informatika";
    }
    else if(opsi==2){
    Jurusan="Sistem Informasi";
    }
    else if(opsi==3){
    Jurusan="Desain Komunikasi Visual";
    }
    else{
    cout<<"Anda hanya bisa memilih salah satu dari 3 opsi diatas"<<endl;
    return 0;
    }
    cout<<"Jurusan anda "<< Jurusan <<endl<<endl;


        cout<<"Masukkan Semester Anda"<<endl<<endl;
        cout<<"Semester : ";
        cin>>opsi;
        cout<<endl;

    if(opsi== 1||opsi==2){
    cout<<"Jurusan anda "<< Jurusan ;

    cout<<" dan anda berada dalam kategori Freshman Year"<<endl;
    }

    else if(opsi== 3||opsi==4){
    cout<<"Jurusan anda "<< Jurusan ;

    cout<<" dan anda berada dalam kategori Sophomore Year"<<endl;
    }
    else if(opsi== 5||opsi==6){
    cout<<"Jurusan anda "<< Jurusan ;

    cout<<" dan anda berada dalam kategori Junior Year"<<endl;
    }
    else if(opsi== 7||opsi==8){
    cout<<"Jurusan anda "<< Jurusan ;

    cout<<" dan anda berada dalam kategori Senior Year"<<endl;
    }
    else if(opsi>8 && opsi<=14){
    cout<<"Jurusan anda "<< Jurusan ;

    cout<<" dan anda berada dalam kategori Eternal Year"<<endl;
    }
    else if(opsi>14){
    cout<<"Seharusnya Anda Sudah Terkena Dropout"<<endl;
    }

    return 0;
}

