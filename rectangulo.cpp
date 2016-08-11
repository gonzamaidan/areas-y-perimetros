#include "header.h"

Rectangulo ReadRectangulo() {
	Rectangulo rectangulo;
	rectangulo.origen = ReadPunto();
	cout << "Ingrese el alto y el ancho del rectangulo, respectivamente\n";
	cin >> rectangulo.alto >> rectangulo.ancho;
	return rectangulo;
};

double GetPerimetroRectangulo(Rectangulo unRectangulo) {
       double perimetro = (unRectangulo.alto*2) + (unRectangulo.ancho*2);
       
    return perimetro;
};

double GetAreaRectangulo(Rectangulo unRectangulo) {
       double area = unRectangulo.alto * unRectangulo.ancho;
    
	return area;
};
