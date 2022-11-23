#include <iostream>

using namespace std;

int main()
{
    int total = 0;
    for(int i = 1 ; i<=20 ; i++){
        int hasil = i;

        total+=hasil;
        cout<<i<<endl;
    }
        cout<<endl;
        cout<<"Total= "<<total<<endl;
        cout<<"Rata Rata= "<<total/20.0f<<endl;

    return 0;
}
