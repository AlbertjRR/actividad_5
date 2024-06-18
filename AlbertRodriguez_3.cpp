#include <iostream>
using namespace std;

int valorAbsoluto(int numero) {
    if (valor < 0) {
        return -valor;
    } else {
        return valor;
    }
}

int main() {
    int num = -10;
    cout << "El valor absoluto de " << num << " es: " << valorAbsoluto(num) << endl;

    return 0;
}
