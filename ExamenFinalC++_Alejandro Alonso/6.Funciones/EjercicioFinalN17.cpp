#include <iostream>
using namespace std;

// Funci�n para intercambiar dos n�meros usando paso por referencia
void intercambiar(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int a, b;

    // Solicitar los dos n�meros al usuario
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    // Mostrar los valores antes del intercambio
    cout << "Antes del intercambio: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Llamar a la funci�n para intercambiar los valores
    intercambiar(a, b);

    // Mostrar los valores despu�s del intercambio
    cout << "Despues del intercambio: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
