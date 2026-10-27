#include <iostream>
#include <cmath>
using namespace std;

// 1 задача
int main() {
    int a;
    cout << "Vvedite 6 znachnoe chislo: ";
    cin >> a;
    if (a < 100000 || a > 999999) {
        cout << "chislo ne 6 znachnoe";
    }
    else {
        int chislo6 = a % 10; // a % 10 - магнит // a / 10 - топор
        a = a / 10;
        int chislo5 = a % 10;
        a = a / 10;
        int chislo4 = a % 10;
        a = a / 10;
        int chislo3 = a % 10;
        a = a / 10;
        int chislo2 = a % 10;
        a = a / 10;
        int chislo1 = a;

        int cymma1 = chislo1 + chislo2 + chislo3;
        int cymma2 = chislo4 + chislo5 + chislo6;





        if (cymma1 == cymma2) {
            cout << "bilet shastlivuy! :]";
        }
        else {
            cout << "bilet ne shastlivuy :(";
        }


    }
}

// 2 задача
int main() {
    int a;
    cout << "Vvedite 4 znachnoe chislo: ";
    cin >> a;
    if (a < 1000 || a > 9999) {
        cout << "chislo ne 4 znachnoe";


    }
    else {
        int chislo4 = a % 10;   // % 10 - магнит     / 10 - топор
        a = a / 10;
        int chislo3 = a % 10;
        a = a / 10;
        int chislo2 = a % 10;
        a = a / 10;
        int chislo1 = a;
        int itog = (chislo2 * 1000) + (chislo1 * 100) + (chislo4 * 10) + chislo3;
        cout << "itog: " << itog << endl;

    }

}

//3 задача
int main() {
    char a, b, c, d, f, g, l;
    cout << "Vvedite 7 zelux chisel: ";
    cin >> a >> b >> c >> d >> f >> g >> l;
    char max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;

    }
    if (f > max) {
        max = f;
    }
    if (g > max) {
        max = g;
    }
    if (l > max) {
        max = l;
    }
    cout << "max chislo: " << max;


}