
#include "header.h"

Circulo ReadCirculo() {
	Circulo circulo;
	circulo.centro = ReadPunto();
	cout << "Ingrese el radio del circulo\n";
	cin >> circulo.radio;
	return circulo;
};
double GetCircunferencia(Circulo unCirculo) {

	double circunf;
	circunf = 2 * pi*unCirculo.radio;
	return circunf;

};
double GetAreaCirculo(Circulo unCirculo) {

	double areaC;
	areaC = pi*unCirculo.radio*unCirculo.radio;
	return areaC;

};
