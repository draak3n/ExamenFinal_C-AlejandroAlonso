#include <iostream>
using namespace std;

// Función para sumar dos números
int sumar(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b;

    // Solicitar los dos números al usuario
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    // Llamar a la función y mostrar el resultado
    int resultado = sumar(a, b);
    cout << "La suma de " << a << " y " << b << " es: " << resultado << endl;

    return 0;
}
