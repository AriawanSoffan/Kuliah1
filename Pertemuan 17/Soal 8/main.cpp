#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int x;
    cout<<"Input Bilangan = ";
    cin >>x;

        while (x != 9999){
            cout<<x<<endl;
            sum+=1;
            cout<<"Input Bilangan = ";
            cin >>x;

        }
        cout<<"Jumlah Angka = "<<sum<<endl;
    return 0;
}
