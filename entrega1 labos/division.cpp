#include <iostream>

int division(int dividendo, int divisor, int& cociente, int& resto){
     cociente = 0;
     resto = dividendo - divisor;
    while (dividendo >= divisor && divisor > 0){
        dividendo = dividendo - divisor;
        cociente ++;
        resto = dividendo;
    }
}

using namespace std;
int main() {
    /* No hace falta modificar el main */
    //Leo la entrada
    int divisor,dividendo,cociente,resto;
    cin >> dividendo>>divisor;
    
    //Calculo la division
    division(dividendo,divisor,cociente,resto);
    
    //Salida
    cout << cociente << " " << resto;
    
    return 0;
}
