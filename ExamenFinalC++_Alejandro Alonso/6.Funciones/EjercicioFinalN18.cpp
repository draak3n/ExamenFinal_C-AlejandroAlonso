#include <iostream>
using namespace std;

// Funci�n para calcular el mayor de tres n�meros, pasando los n�meros por valor
// y devolviendo el resultado por referencia
void calcularMayor(int num1, int num2, int num3, int &mayor) {
    mayor = num1; // Inicializar el mayor como el primer n�mero

    // Comparar con el segundo n�mero
    if (num2 > mayor) {
        mayor = num2;
    }

    // Comparar con el tercer n�mero
    if (num3 > mayor) {
        mayor = num3;
    }
}

int main() {
    int a, b, c, mayor;

    // Solicitar los tres n�meros al usuario
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;

    // Llamar a la funci�n para calcular el mayor
    calcularMayor(a, b, c, mayor);

    // Mostrar el mayor de los tres n�meros
    cout << "El numero mayor es: " << mayor << endl;

    return 0;
}
