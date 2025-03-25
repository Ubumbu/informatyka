#include <iostream>
using namespace std;

int main() {
    int tablica[5];
    int min = INT_MAX;  

  
    cout << "Podaj 5 liczb calkowitych:\n";
    for (int i = 0; i < 5; i++) {
        cin >> tablica[i];
    }

  
    for (int i = 0; i < 5; i++) {
        if (tablica[i] < min) {
            min = tablica[i];
        }
    }

   
    cout << "Najmniejsza liczba to: " << min << endl;
    
    return 0;
}
