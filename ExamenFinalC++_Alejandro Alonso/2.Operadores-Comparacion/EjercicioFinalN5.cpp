#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    // Solicitar tres números al usuario
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    // Determinar el orden de los números
    if (num1 < num2 && num2 < num3) {
        cout << "Los numeros están en orden ascendente." << endl;
    } else if (num1 > num2 && num2 > num3) {
        cout << "Los numeros están en orden descendente." << endl;
    } else {
        cout << "Los numeros estan desordenados." << endl;
    }

    return 0;
}
