/*
	areas-y-perimetros
*/

#include<iostream>

using namespace std;
struct Punto {
	double x, y;
};
struct Circulo {
	Punto centro;
	double radio;
};
struct Rectangulo {
	Punto origen;
	double ancho, alto;
};
struct Triangulo {
	Punto a,b,c;
};

Punto ReadPunto();
Circulo ReadCirculo();
Rectangulo ReadRectangulo();
Triangulo ReadTriangulo();

double GetCircunferencia(Circulo unCirculo);
double GetAreaCirculo(Circulo unCirculo);

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

Punto ReadPunto() {
	Punto punto;
	punto.x = 0;
	punto.y = 0;
	return punto;
};
Circulo ReadCirculo() {
	Circulo circulo;
	circulo.centro = ReadPunto();
	circulo.radio = 0;
	return circulo;
};
Rectangulo ReadRectangulo() {
	Rectangulo rectangulo;
	rectangulo.origen = ReadPunto();
	rectangulo.alto = 0;
	rectangulo.ancho = 0;
};
Triangulo ReadTriangulo() {
	Triangulo triangulo;
	triangulo.a = ReadPunto();
	triangulo.b = ReadPunto();
	triangulo.c = ReadPunto();
	return triangulo;
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

double GetPerimetroRectangulo(Rectangulo unRectangulo) {
	return 0;
};
double GetAreaRectangulo(Rectangulo unRectangulo) {
	return 0;
};

double GetPerimetroTriangulo(Triangulo unTriangulo) {
	return 0;
};
double GetAreaTriangulo(Triangulo unTriangulo) {
	return 0;
};
