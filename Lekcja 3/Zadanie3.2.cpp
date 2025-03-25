#include <iostream>
using namespace std;

int main() {
    double tempC;
    char jednostka;

    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> tempC;
    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> jednostka;

    switch(jednostka) {
        case 'K':
            cout << "Temperatura w stopniach Kelvina: " << tempC + 273.15 << endl;
            break;
        case 'F':
            cout << "Temperatura w stopniach Fahrenheita: " << (tempC * 9/5) + 32 << endl;
            break;
        default:
            cout << "B³¹d: Nieprawid³owa jednostka!" << endl;
            break;
    }

    return 0;
}
