#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    // Solicitar tres n�meros al usuario
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    // Determinar el orden de los n�meros
    if (num1 < num2 && num2 < num3) {
        cout << "Los numeros est�n en orden ascendente." << endl;
    } else if (num1 > num2 && num2 > num3) {
        cout << "Los numeros est�n en orden descendente." << endl;
    } else {
        cout << "Los numeros estan desordenados." << endl;
    }

    return 0;
}
