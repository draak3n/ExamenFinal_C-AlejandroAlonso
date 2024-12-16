#include <iostream>
using namespace std;

int main() {
    double num;

    // Solicitar un número al usuario
    cout << "Ingrese un numero: ";
    cin >> num;

    // Usar if-else para determinar si el número es positivo, negativo o cero
    if (num > 0) {
        cout << "El numero es positivo." << endl;
    } else if (num < 0) {
        cout << "El numero es negativo." << endl;
    } else {
        cout << "El numero es cero." << endl;
    }

    return 0;
}
