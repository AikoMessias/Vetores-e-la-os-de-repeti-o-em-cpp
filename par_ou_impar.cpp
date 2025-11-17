//pares em 10 numeros

#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "verificação de par ou ímpar" << endl;
    
    for (int i = 1; i <= 10; i++) {
        cout << "digite o " << i << "° número: ";
        cin >> numero;
        
        if (numero % 2 == 0) {
            cout << numero << " é PAR." << endl;
        } else {
            cout << numero << " é ÍMPAR." << endl;
        }
   }    
    
    return 0;
}
