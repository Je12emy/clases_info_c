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
        cout << "3. Calculador de valores." << endl;

        cout << "Seleccione un programa: " << "";
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

                    cout << "Ingrese cuantas letras desea ingresar" << "" << endl;
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
            case 3:
                {
                    const int cantidad_numeros = 3;
                    bool continuar = true;
                    int valor;
                
                    int numero1;
                    int numero2;
                    int numero3;

                    // Capturar valores
                    for(int i = 0; i < cantidad_numeros; i++) {
                        cout << "Ingrese un numero para el valor " << i+1 << ": ";
                        cin >> valor;
                        
                        // Verificar si el valor tiene dos digitos
                        if (valor < 10 || valor >= 100) {
                            cout << "Ese no es un valor valido!" << endl;
                            continuar = false;
                            break;
                        } else {
                            // Asignar los valores de cada variable
                            switch(i) {
                                case 0:
                                    numero1 = valor;
                                break;
                                case 1:
                                    numero2 = valor;
                                break;
                                case 2:
                                    numero3 = valor;
                                break;
                            }
                        }
                    }
                    

                    // Evaluar si hay un valor repetido
                    if(numero1 == numero2 || numero1 == numero3) {
                        cout << "No se repiten numero!" << endl
                        continuar = false;
                    }
                    if(numero3 == numero2 || numero3 == numero1) {
                        cout << "No se repiten numero!" << endl
                        continuar = false;
                    }

                    if(continuar) {
                        // Calcular resultados
                        int suma = numero1 + numero2 + numero3;
                        float promedio = suma / 3;
                        int producto = numero1 * numero2 * numero3;

                        int menor;
                        int mayor;

                        cout << "- Suma de los numeros: " << suma << endl;
                        cout << "- Promedio de los numeros:" << promedio << endl;
                        cout << "- Producto de los numeros:" << producto << endl;

                        // Obtener al menor
                        if(numero1 < numero2 && numero1 < numero3) {
                            menor = numero1;
                        } else if (numero2 < numero1 && numero2 < numero3 ) {
                            menor = numero2;
                        } else {
                            menor = numero3;
                        }

                        cout << "- Valor menor:" << menor << endl;

                        // Obtener al mayor
                        if(numero1 > numero2 && numero1 > numero3) {
                            mayor = numero1;
                        } else if (numero2 > numero1 && numero2 > numero3 ) {
                            mayor = numero2;
                        } else {
                            mayor = numero3;
                        }

                        cout << "- Valor mayor: " << mayor << endl;
                    }
                }
                break;
            default:
                {
                    char salir;
                    cout << "Desea salir del programa?[s/n]:" << "";
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
