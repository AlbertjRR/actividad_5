#include <iostream>
using namespace std;

void divisionEnteraResto(int dividendo, int divisor, int &cociente, int &resto) {
    if (divisor == 0) {
        cout << "Error: No se puede dividir por cero" << endl;
        return;
    }

    int signo = 1;
    if ((dividendo < 0 && divisor > 0) || (dividendo > 0 && divisor < 0)) {
        signo = -1;
    }

    dividendo =  (dividendo);
    divisor = (divisor);

    cociente = 0;
    resto = 0;

    while (dividendo >= divisor) {
        dividendo -= divisor;
        cociente++;
    }

    resto = dividendo * signo;
}

int main() {
    int numee1 = 20;
    int num2 = 3;
    int cociente, resto;

    divisionEnteraResto(num1, num2, cociente, resto);

    cout << "Division entera: " << cociente << ", Resto: " << resto << endl;

    return 0;
}
