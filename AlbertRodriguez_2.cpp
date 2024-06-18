#include <iostream>
using namespace std;

int leerEnteroEntreLimites(int limiteInferior, int limiteSuperior) {
    int numero;
    do {
        cout << "Introduce un numero entre " << limiteInferior << " y " << limiteSuperior << ": ";
        cin >> numero;
    } while (numero < limiteInferior || numero > limiteSuperior);

    return numero;
}

int main() {
    int min = 1;
    int max = 50;

    int numeroValido = leerEnteroEntreLimites(min, max);

    cout << "El numero valido introducido es: " << numeroValido << endl;

    return 0;
}
