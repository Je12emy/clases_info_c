#include <iostream>
using namespace std;

int main(){
    // Menu
    bool correr = true;

    while (correr) {
        // Imprimir informacion
        cout << "Nombre" << endl;
        cout << "Apellido" << endl;
        cout << "Curso" << endl;
        cout << "Profesor" << endl;

        int programa;

        cout << "Ingrese una opción: " << "";
        cin >> programa;

        if (programa == 1){
            // Programa 1
            // Programa 1 MODIFICADO
            cout << "******************" << endl;
            cout << "*  Programa 1    *" << endl;
            cout << "******************" << endl;
                    
            
            // Contadores
            int vocales_contador = 0;
            int consonantes_contador = 0;
            // Variables para capturar
            int numero_letras;
            char character;

            cout << "Ingrese un numero" << "" << endl;
            cin >> numero_letras;
                
            int i = 0;
            // Por cada letra en la palabra
            while(i < numero_letras) {

            cout << "Ingrese un caracter" << "";
            cin >> character;

            if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
                vocales_contador ++;
            } else {
                consonantes_contador++;
            }
            cout << "Vocales: " << vocales_contador << endl;
            cout << "Consonantes:" << consonantes_contador << endl;
            i++;
        }
        }
        else if (programa == 2){
            
                    // Programa 2
                    // Variable contador
                    int contador = 1; // <--
                    int numero;

                    // Numero
                    cout << "- Ingrese un menor a 25: " << "";
                    cin >> numero;
                    
                    if (numero < 25) {
                        while (contador < numero) {
                            int columnas = 0;
                            // Imprimir columnas
                            while (columnas < contador) {
                                // Mientras el numero de columna sea menor al contador
                                cout << "*" << "";
                                columnas++;
                            }
                            // Iniciar una nueva linea
                            cout << endl;
                            contador++; // <--
                        }
                    } else {
                        cout << "Ese numero no es valido!" << endl;
                    }
        }
        else if (programa == 3){
            // Programa 3
        }
        else {
            cout << "Esa no es una opcion!" << endl;
        }

    }

    return 0;
}

// Preferencia
// for: Numeros, contadores
// while/do While: Booleanos


/*
 * Pidale al usuario un numero
 * Cualquier ciclo que hemos visto
 * Imprima todos numeros antes que este
 * 5 -> 01234
 * 2 -> 01
 * Tips: Usen el contador
 * Puntos extra si muestran si mensaje si el numero es negativo
 * Puntos extra si el programa pregunta si quieren volvera ejecutarlo
 */

