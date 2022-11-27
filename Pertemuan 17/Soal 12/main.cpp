#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<"|  Celcius  |  Fahrenheit |"<<endl;
    cout<<"|-------------------------|"<<endl;
    for(float x = 0.00 ; x <= 100 ; x++ ){

        cout << fixed << setprecision(0) << "|    " <<x<< "     |      "
        << setprecision(1)<< x*1.8 + 32 << "    |" <<endl;
    }

    return 0;
}
