#include <iostream>

using namespace std;

int main()
{
    int kali;

    cout<<"Input : ";
    cin>>kali;
    for(int x = 1 ; x <= 10 ; x++ ){
        cout<<x<<" x "<<kali<<" = "<<x*kali<<endl;
    }
    return 0;
}
