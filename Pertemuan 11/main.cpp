#include <iostream>

using namespace std;

int main()

{
        int var1 = 1;
        int var2 = 1;
        int hasil = 1;
        int x = 100;

        cout << hasil <<endl;

    for (int i = 1; i <= x; i++) {

        hasil = var1 + var2;
        var1 = var2;
        var2 = hasil;

        if (hasil >= 100) {
        return 0;
    }
        cout << hasil << endl;
    }
}

