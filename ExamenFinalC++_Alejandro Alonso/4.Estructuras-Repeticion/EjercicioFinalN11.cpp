#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0;

    // Solicitar números al usuario hasta que ingrese un número negativo
    cout << "Ingrese un numero (ingrese un numero negativo para finalizar): ";
    cin >> numero;

    while (numero >= 0) {
        suma += numero;  // Sumar el número ingresado
        cout << "Ingrese otro numero (ingrese un numero negativo para finalizar): ";
        cin >> numero;
    }

    // Imprimir la suma de todos los números ingresados
    cout << "La suma de los numeros ingresados es: " << suma << endl;

    return 0;
}
