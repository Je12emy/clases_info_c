#include <iostream>
using namespace std;

int main(){
    // Operadores AND, OR y NOT
    int numero = 8;
    
    // && AND: Ambas condicionaes se cumplen
    // || OR: Solo una condicion se cumple
    // ! NOT: Le da vuelta a la condicion
    if( !(numero > 0) ) { // Verdadero -> Falso
        cout << "El numero es valido" << endl;
    } else {
        cout << "El numero no es valido" << endl;
    }
    return 0;
}
