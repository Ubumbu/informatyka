#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Podaj pierwsz� liczb�: ";
    cin >> a;

    cout << "Podaj drug� liczb�: ";
    cin >> b;

    cout << "Suma: " << a + b << endl;
    cout << "R�nica: " << a - b << endl;
    cout << "Iloczyn: " << a * b << endl;
    cout << "Iloraz: " << a / b << endl;
    cout << "Reszta z dzielenia: " << a % b << endl;

    return 0;
