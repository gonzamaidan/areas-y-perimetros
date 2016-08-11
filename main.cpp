/*
	areas-y-perimetros
*/

#include "header.h"


double GetPerimetroRectangulo(Rectangulo unRectangulo);
double GetAreaRectangulo(Rectangulo unRectangulo);

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

