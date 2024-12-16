#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, promedio;
    double mayor, menor;

    // Solicitar tres números al usuario
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    // Calcular el promedio
    promedio = (num1 + num2 + num3) / 3;

    // Determinar el número mayor
    mayor = num1;
    if (num2 > mayor) mayor = num2;
    if (num3 > mayor) mayor = num3;

    // Determinar el número menor
    menor = num1;
    if (num2 < menor) menor = num2;
    if (num3 < menor) menor = num3;

    // Mostrar los resultados
    cout << "El promedio de los numeros es: " << promedio << endl;
    cout << "La diferencia entre el mayor y el menor numero es: " << mayor - menor << endl;

    return 0;
}
