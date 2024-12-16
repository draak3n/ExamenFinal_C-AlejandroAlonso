#include <iostream>
using namespace std;

int main() {
    int opcion;
    double num1, num2, resultado;

    // Mostrar el menú
    cout << "Seleccione una operacion matematica:" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "Ingrese su opcion (1-4): ";
    cin >> opcion;

    // Solicitar dos números para la operación
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Usar switch para realizar la operación seleccionada
    switch (opcion) {
        case 1:
            resultado = num1 + num2;
            cout << "El resultado de la suma es: " << resultado << endl;
            break;
        case 2:
            resultado = num1 - num2;
            cout << "El resultado de la resta es: " << resultado << endl;
            break;
        case 3:
            resultado = num1 * num2;
            cout << "El resultado de la multiplicacion es: " << resultado << endl;
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "El resultado de la division es: " << resultado << endl;
            } else {
                cout << "Error: No se puede dividir entre cero." << endl;
            }
            break;
        default:
            cout << "Opcion invalida. Por favor, ingrese una opcion entre 1 y 4." << endl;
            break;
    }

    return 0;
}
