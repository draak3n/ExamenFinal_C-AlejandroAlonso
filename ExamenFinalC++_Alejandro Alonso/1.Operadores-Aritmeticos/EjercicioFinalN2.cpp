#include <iostream>
using namespace std;

int main() {
    const double PI = 3.1416;
    double radio, area, circunferencia;

    // Solicitar el radio al usuario
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    // Calcular área y circunferencia
    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;

    // Mostrar los resultados
    cout << "El area del circulo es: " << area << endl;
    cout << "La circunferencia del circulo es: " << circunferencia << endl;

    return 0;
}

