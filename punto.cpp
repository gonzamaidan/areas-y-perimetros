#include "header.h"

Punto ReadPunto() {
	Punto punto;
	cout<<"Ingrese las variables del Punto\n";
	cin >> punto.x >> punto.y;
	return punto;
};
