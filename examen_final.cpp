#include <iostream>
using namespace std;

int main(){
    bool run = true;

    string nombre = "Julian";
    string apellidos = "Rodríguez Vega";
    string curso = "INDO-120: Informatica I";

    // Menu inicial
    do {

        cout << "**********************" << endl;
        cout << nombre << " " << apellidos << endl;
        cout << curso << endl;
    
        int opcion;

        // Pedir una opción

        cout << "1. Contador de letras." << endl;
        cout << "2. Imprimir una figura." << endl;
        cout << "Seleccione un programa " << "o Ingrese cualquier otro nuemro para buscar salir: " << "";
        cin >> opcion;


        // Validar opción con un switch
        // Validar con if
        switch(opcion) {
            case 1:
                {
                    // Programa 1 ORIGINAL
                    cout << "Programa 1" << endl;
                    
                    // Contadores
                    int vocales = 0;
                    int consonantes = 0;
                    // Variables para capturar
                    int letras;
                    char letra;

                    cout << "Ingrese cuantas letras desea ingresar: " << "";
                    cin >> letras;
                
                    // Por cada letra en la palabra
                    for(int contador = 0; contador < letras; contador++) {

                        cout << "Ingrese una letra: " << "";
                        cin >> letra;

                        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
                           vocales++;
                     } else {
                            consonantes++;
                        }
                    }

                    cout << "Se contaron " << vocales << " vocales." << endl;
                    cout << "Se contaron " << consonantes << " consonantes." << endl;
                }
                break;
            case 2:
                {
                    // Programa 2
                    // Variable contador
                    int contador = 1;
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
                            contador++;
                        }
                    } else {
                        cout << "Ese numero no es valido!" << endl;
                    }


                }
                break;
            default:
                {
                    char salir;
                    cout << "Desea salir del programa? [s/n]: " << "";
                    cin >> salir;
                    
                    if(salir == 's') {
                        run = false;
                    }
                    else if (salir == 'n') {
                        cout << "Continuando con el programa..." << endl;
                    } else {
                        cout << "Esa no es una opción valida" << endl;
                    }
                }
                break;
        }
    } while (run);
    return 0;
}
