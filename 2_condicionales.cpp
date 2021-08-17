#include <iostream>
using namespace std;

int main() {
    bool verdadero = true;

    int a = 1;
    int b = 2;
    int c = 3;
    int numero;

    // Operadores 
    // <> 
    // <= Mayor o Igual
    // >= Menor o Igual
    // == Igualdad

    // 1 < 2 = true
    // 1 > 2 = false
    // 1 == 2 = false
    // true = true
    // false = false
    
    cout << "Ingrese un numero mayor a 50: " << "";
    cin >> numero;

    // Si 
    if (numero > 50) {
        cout << "El numero es mayor a 50 " << endl;
    } 
    // Sino ...
    else {
        cout << "El numero es menor a 50 " << endl;
    }

    return 0;
}
// Ejercicio Contraseña
// Leer un numero
// Variable int con el valor que quiera
// Si son iguales, mostrar celular desbloqueado
// Si no son iguales, mostrar contraseña incorrecta.
