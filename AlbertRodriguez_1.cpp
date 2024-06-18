#include <iostream>
using namespace std;

void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int valor1 = 3;
    int valor2 = 6;

    cout << "Antes del intercambio: " << "valor1 = " << valor1 << ", valor2 = " << valor2 << endl;

    intercambiar(valor1, valor2);

    cout << "Después del intercambio: " << "valor1 = " << valor1 << ", valor2 = " << valor2 << endl;

    return 0;
}
