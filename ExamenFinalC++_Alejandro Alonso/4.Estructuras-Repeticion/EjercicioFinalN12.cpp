#include <iostream>
using namespace std;

int main() {
    int opcion;
    double numero;

    do {
        // Mostrar el menú
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Calcular el cuadrado de un numero." << endl;
        cout << "2. Calcular el cubo de un numero." << endl;
        cout << "3. Salir." << endl;
        cout << "Ingrese su opcion (1-3): ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Solicitar el número y calcular el cuadrado
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "El cuadrado de " << numero << " es " << numero * numero << endl;
                break;
            case 2:
                // Solicitar el número y calcular el cubo
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "El cubo de " << numero << " es " << numero * numero * numero << endl;
                break;
            case 3:
                // Salir
                cout << "Saliendo del programa." << endl;
                break;
            default:
                // Opción inválida
                cout << "Opción invalida. Por favor ingrese una opcion entre 1 y 3." << endl;
                break;
        }

    } while (opcion != 3);  // El ciclo se repite hasta que el usuario elige salir

    return 0;
}
