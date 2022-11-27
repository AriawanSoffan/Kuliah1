#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string branch;
    cout<<"   Celcius       Fahrenheit       Keterangan                      "<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    for(float x = 100 ; x >= -40; x-- ){
        if(x!=-40 && x!=-18 && x!=0 && x!=10 && x!=21 && x!=30 && x!=37 && x!=40 && x!=100){
            continue;
        }
        else if(x>=41){
            branch="Air Mendidih";
        }
        else if(x>=38 && x<=40){
            branch="Air Mandi Panas";
        }
        else if(x>=31 && x<=37){
            branch="Temperatur Tubuh ";
        }
        else if(x>=22 && x<=30){
            branch="Cuaca Pantai";
        }
        else if(x>=11 && x<=21){
            branch="Temperatur Ruangan";
        }
        else if(x>=1 && x<=10){
            branch="Hari Yang Dingin";
        }
        else if(x>=-17 && x<=0){
            branch="Titik Beku Air";
        }
        else if(x>=-39 && x<=-18){
            branch="Cuaca Dingin Bersalju";
        }
        else if(x<=-40){
            branch="Cuaca Sangat Dingin Bersalju";
        }

        cout << fixed << setprecision(0) << "     " <<x<< "             "
        << setprecision(1)<< x*1.8 + 32 << "         " <<branch<<endl;
    }

    return 0;
}
