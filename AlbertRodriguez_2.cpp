#include <iostream>
using namespace std;

int leerEnteroEntreLimites(int limiteInferior, int limiteSuperior) {
    int num;
    do {
        cout << "Introduce un numero entre " << limiteInferior << " y " << limiteSuperior << ": ";
        cin >> num;
    } while (num < limiteInferior || num > limiteSuperior);

    return num;
}

int main() {
    int min = 1;
    int max = 50;

    int numValido = leerEnteroEntreLimites(min, max);

    cout << "El num valido introducido es: " << numValido << endl;

    return 0;
}
