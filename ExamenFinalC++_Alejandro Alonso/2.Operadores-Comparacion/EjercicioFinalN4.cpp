#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    // Solicitar dos números al usuario
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Comparar los números
    if (num1 > num2) {
        cout << "El numero " << num1 << " es mayor que " << num2 << "." << endl;
    } else if (num1 < num2) {
        cout << "El numero " << num2 << " es mayor que " << num1 << "." << endl;
    } else {
        cout << "Ambos numeros son iguales." << endl;
    }

    return 0;
}
