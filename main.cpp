/*
	areas-y-perimetros
*/

#include "header.h"



struct Triangulo {
	Punto a,b,c;
};

Triangulo ReadTriangulo();

double GetPerimetroRectangulo(Rectangulo unRectangulo);
double GetAreaRectangulo(Rectangulo unRectangulo);

double GetPerimetroTriangulo(Triangulo unTriangulo);
double GetAreaTriangulo(Triangulo unTriangulo);

int main () {
	Circulo circulo;
	Rectangulo rectangulo;
	Triangulo triangulo;

	circulo = ReadCirculo();
	rectangulo = ReadRectangulo();
	triangulo = ReadTriangulo();

	cout << "Perimetro circulo: " << GetCircunferencia(circulo) << "\n";
	cout << "Area circulo: " << GetAreaCirculo(circulo) << "\n";

	cout << "Perimetro rectangulo: " << GetPerimetroRectangulo(rectangulo) << "\n";
	cout << "Area rectangulo: " << GetAreaRectangulo(rectangulo) << "\n";

	cout << "Perimetro triangulo: " << GetPerimetroTriangulo(triangulo) << "\n";
	cout << "Area triangulo: " << GetAreaTriangulo(triangulo) << "\n";
}

Triangulo ReadTriangulo() {
	Triangulo triangulo;
	cout << "Ingrese los puntos del triangulo\n";
	triangulo.a = ReadPunto();
	triangulo.b = ReadPunto();
	triangulo.c = ReadPunto();
	return triangulo;
};

double GetPerimetroTriangulo(Triangulo unTriangulo) {
	double ab = sqrt(pow(unTriangulo.b.x - unTriangulo.a.x,2) + pow(unTriangulo.b.y - unTriangulo.a.y,2));
	double ac = sqrt(pow(unTriangulo.c.x - unTriangulo.a.x,2) + pow(unTriangulo.c.y - unTriangulo.a.y,2));
	double bc = sqrt(pow(unTriangulo.c.x - unTriangulo.b.x,2) + pow(unTriangulo.c.y - unTriangulo.b.y,2));
	return ab + ac + bc;
};
double GetAreaTriangulo(Triangulo unTriangulo) {
	Punto nAB;
	nAB.x = unTriangulo.b.y - unTriangulo.a.y;
	nAB.y = -(unTriangulo.b.x - unTriangulo.a.x);
	Punto ac;
	ac.x = unTriangulo.c.x - unTriangulo.a.x;
	ac.y = unTriangulo.c.y - unTriangulo.a.y;
	double area = (nAB.x * ac.x + nAB.y * ac.y)/2;
	if (area < 0) {
		area = -area;
	}
	return area;
};
