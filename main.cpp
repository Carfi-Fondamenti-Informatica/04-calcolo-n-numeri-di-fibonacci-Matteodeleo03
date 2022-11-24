#include <iostream>
using namespace std;

int main() {
   int n, i, primo = 1, secondo = 1, terzo;
    cin >> n;

    if (n < 2) {
        cout << "errore";
    } else {
        cout << primo << "," << secondo;

        for (i = 2; i < n; i++) {
            terzo = primo + secondo;
            primo = secondo;
            secondo = terzo;
            cout << "," << terzo;
        }
    }
}
   return 0;
}
