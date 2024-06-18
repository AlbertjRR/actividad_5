#include <iostream>
using namespace std;

int valorAbsoluto(int numero) {
    if (numero < 0) {
        return -numero;
    } else {
        return numero;
    }
}

int main() {
    int num = -10;
    cout << "El valor absoluto de " << num << " es: " << valorAbsoluto(num) << endl;

    return 0;
}
