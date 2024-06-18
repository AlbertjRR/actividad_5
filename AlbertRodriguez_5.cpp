#include <iostream>
#include <cmath>
using namespace std;

void polarACartesiano(double radio, double angulo, double &x, double &y) {
    x = radio * cos(angulo);
    y = radio * sin(angulo);
}

int main() {
    double radio = 5.0;
    double anguloEnRadianes = M_PI / 3.0; 
    double x, y;

    polarACartesiano(radio, anguloEnRadianes, x, y);

    cout << "Las coordenadas cartesianas son: (" << x << ", " << y << ")" << endl;

    return 0;
}
