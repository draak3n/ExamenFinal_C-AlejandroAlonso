#include <iostream>
#include <string>
using namespace std;

// Función para desencriptar la palabra
string desencriptarPalabra(string palabraEncriptada, int clave) {
    string palabraDesencriptada = "";

    // Iterar sobre cada carácter de la palabra encriptada
    for (int i = 0; i < palabraEncriptada.length(); i++) {
        // Desplazar el valor ASCII del carácter según la clave (restando la clave)
        char caracterDesencriptado = palabraEncriptada[i] - clave;
        palabraDesencriptada += caracterDesencriptado;
    }

    return palabraDesencriptada;
}

int main() {
    string palabraEncriptada;

    // Solicitar la palabra encriptada al usuario
    cout << "Ingrese la palabra encriptada: ";
    cin >> palabraEncriptada;

    // Intentar todas las posibles claves (1 a 5)
    for (int clave = 1; clave <= 5; clave++) {
        // Desencriptar la palabra con la clave actual
        string palabraDesencriptada = desencriptarPalabra(palabraEncriptada, clave);

        // Mostrar el resultado de la desencriptación
        cout << "Con la clave " << clave << ": " << palabraDesencriptada << endl;
    }

    return 0;
}
