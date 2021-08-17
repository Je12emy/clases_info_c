#include <iostream>
using namespace std;

// Ciclos
int main() {
    
    bool run = true;

    // Ciclo For
    // Ciclo While
    // Ciclo Do While
        
    // Por cada numero de veces, ejectuar
    // definir contador; limite; como incrementar
    for (int i = 0;
        i < 5; 
        i = i + 1) {
        // Contador para el ciclo while
        int j = 0;
        // Mientras que
        while (j < 2) {
            cout << "Adios Mundo" << endl;
            // Como incrementar
            j = j + 1;
        }
        cout << "Hola Mundo" << endl;
        // Se incrementa i;
    }
    return 0;
}

/* Primer ciclo 
 * 1. Inicia el ciclo for 
 * 2. Iniciar el ciclo while
 * 2.1 "Adios Mundo"
 * 2.2 "Adios Mundo"
 * 3. "Hola Mundo"
 */
