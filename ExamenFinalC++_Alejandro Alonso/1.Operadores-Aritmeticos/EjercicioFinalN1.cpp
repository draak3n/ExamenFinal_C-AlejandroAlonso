#include <iostream>
#include <algorithm> // Para usar std::min y std::max
using namespace std; //Alejandro Alonso

// Punto 1: Suma, resta, multiplicación y división
void operacionesBasicas() {
    int num1, num2;
    cout << "Ingresa el primer numero entero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero entero: ";
    cin >> num2;

    cout << "Suma: " << num1 + num2 << endl;
    cout << "Resta: " << num1 - num2 << endl;
    cout << "Multiplicacion: " << num1 * num2 << endl;
    if (num2 != 0) {
        cout << "Division: " << static_cast<double>(num1) / num2 << endl;
    } else {
        cout << "Division: No se puede dividir entre cero." << endl;
    }
}

int main() {
    cout << "--- Punto 1: Operaciones basicas ---" << endl;
    operacionesBasicas();

    return 0;
}
