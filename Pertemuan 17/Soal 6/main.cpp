#include <iostream>

using namespace std;

int main()
{
    int x;
    int min;
    int max;
    cout<<"Masukkan Nilai Anda = ";
    cin >>x;

        min = 99999999;
        max = -99999999;

        while (x != -99){
            if(x < min){
                min = x;
            }
            if(x > max){
                max = x;
            }
           cout<<"Masukkan Nilai Anda = ";
           cin >>x;
        }
        cout<<"Min = "<<min<<endl;
        cout<<"Max = "<<max<<endl;
    return 0;
}
