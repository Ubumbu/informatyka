#include <iostream>
using namespace std;

int main() {
    int tablica[10];
    int sumaParzystych = 0;

    
    cout << "Podaj 10 liczb calkowitych:\n";
    for (int i = 0; i < 10; i++) {
        cin >> tablica[i];
    }


    cout << "Liczby parzyste: ";
    for (int i = 0; i < 10; i++) {
        if (tablica[i] % 2 == 0) {
            cout << tablica[i] << " ";
            sumaParzystych += tablica[i];
        }
    }

    
    cout << "\nSuma liczb parzystych: " << sumaParzystych << endl;

    return 0;
}
