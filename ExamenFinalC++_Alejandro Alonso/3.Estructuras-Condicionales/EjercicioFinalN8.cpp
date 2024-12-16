#include <iostream>
using namespace std;

int main() {
    int dia;

    // Solicitar un número del 1 al 7
    cout << "Ingrese un numero entre 1 y 7 para conocer el dia de la semana: ";
    cin >> dia;

    // Usar switch para imprimir el día de la semana
    switch (dia) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Numero invalido. Ingrese un numero entre 1 y 7." << endl;
            break;
    }

    return 0;
}
