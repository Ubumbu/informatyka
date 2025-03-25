#include <iostream>
using namespace std;

int main() {
    int liczba;
    char odpowiedz;

    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        cout << "Wprowadziles liczbe: " << liczba << endl;

        cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
        cin >> odpowiedz;

    } while (odpowiedz == 't' || odpowiedz == 'T');

    cout << "Dziekuje za wprowadzenie liczb!" << endl;

