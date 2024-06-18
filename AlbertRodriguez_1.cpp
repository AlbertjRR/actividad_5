#include <iostream>
using namespace std;

void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    cout << "Antes del intercambio: " << "num1 = " << num1 << ", num2 = " << num2 << endl;

    intercambiar(num1, num2);

    cout << "Después del intercambio: " << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
