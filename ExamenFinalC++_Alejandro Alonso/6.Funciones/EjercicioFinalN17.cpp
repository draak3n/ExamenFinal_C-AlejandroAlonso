#include <iostream>
using namespace std;

// Función para intercambiar dos números usando paso por referencia
void intercambiar(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int a, b;

    // Solicitar los dos números al usuario
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    // Mostrar los valores antes del intercambio
    cout << "Antes del intercambio: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Llamar a la función para intercambiar los valores
    intercambiar(a, b);

    // Mostrar los valores después del intercambio
    cout << "Despues del intercambio: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
