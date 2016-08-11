struct Rectangulo {
	Punto origen;
	double ancho, alto;
};

Rectangulo ReadRectangulo();

double GetPerimetroRectangulo(Rectangulo unRectangulo);
double GetAreaRectangulo(Rectangulo unRectangulo);
