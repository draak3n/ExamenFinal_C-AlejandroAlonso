#include <iostream>
using namespace std;

int main() {
    double referencia;
    double numeros[5];
    bool todosMayores = true;

    // Solicitar el n�mero de referencia
    cout << "Ingrese el numero de referencia: ";
    cin >> referencia;

    // Solicitar cinco n�meros al usuario
    cout << "Ingrese cinco numeros: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];

        // Verificar si el n�mero es menor o igual al n�mero de referencia
        if (numeros[i] <= referencia) {
            todosMayores = false;
        }
    }

    // Mostrar el resultado
    if (todosMayores) {
        cout << "Todos los numeros son mayores que " << referencia << "." << endl;
    } else {
        cout << "No todos los numeros son mayores que " << referencia << "." << endl;
    }

    return 0;
}
