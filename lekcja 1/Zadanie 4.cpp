#include <iostream>
using namespace std;

int main() {
    string imie;
    int wiek;

    cout << "Podaj swoje imi�: ";
    cin >> imie;

    cout << "Podaj sw�j wiek: ";
    cin >> wiek;

    cout << "Witaj, " << imie << "! Masz " << wiek << " lat." << endl;

    return 0;
}
