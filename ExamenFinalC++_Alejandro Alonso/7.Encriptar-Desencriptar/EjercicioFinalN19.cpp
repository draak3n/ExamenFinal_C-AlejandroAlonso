#include <iostream>
#include <string>
using namespace std;

// Funci�n para encriptar la palabra
string encriptarPalabra(string palabra, int clave) {
    string palabraEncriptada = "";

    // Iterar sobre cada car�cter de la palabra
    for (int i = 0; i < palabra.length(); i++) {
        // Desplazar el valor ASCII del car�cter seg�n la clave
        char caracterEncriptado = palabra[i] + clave;
        palabraEncriptada += caracterEncriptado;
    }

    return palabraEncriptada;
}

int main() {
    string palabra;
    int clave;

    // Solicitar la palabra al usuario
    cout << "Ingrese una palabra para encriptar: ";
    cin >> palabra;

    // Solicitar la clave para la encriptaci�n (un n�mero del 1 al 5)
    cout << "Ingrese un numero del 1 al 5 como clave: ";
    cin >> clave;

    // Validar que la clave est� en el rango permitido
    if (clave < 1 || clave > 5) {
        cout << "La clave debe estar entre 1 y 5." << endl;
        return 1;  // Salir del programa con c�digo de error
    }

    // Encriptar la palabra y mostrar el resultado
    string palabraEncriptada = encriptarPalabra(palabra, clave);
    cout << "Palabra encriptada: " << palabraEncriptada << endl;

    return 0;
}
