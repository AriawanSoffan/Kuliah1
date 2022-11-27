#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int cacah=0;
    int x;
    cout<<"Input Bilangan = ";
    cin >>x;

        while (x != 9999){
            cout<<x<<endl;
            sum+=x;
            cacah+=1;
            cout<<"Input Bilangan = ";
            cin >>x;

        }
        cout<<"Jumlah Angka = "<<sum<<endl;
        cout<<"Jumlah Cacah Angka = "<<cacah<<endl;
    return 0;
}
