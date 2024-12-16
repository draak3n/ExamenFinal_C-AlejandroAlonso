#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros(5);  // Vector de 5 elementos

    // Solicitar al usuario ingresar 5 números
    cout << "Ingrese 5 numeros:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    // Imprimir los números en orden inverso
    cout << "Los numeros en orden inverso son:" << endl;
    for (int i = 4; i >= 0; i--) {
        cout << numeros[i] << endl;
    }

    return 0;
}
