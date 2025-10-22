class Wektor2D
{
public:
	Wektor2D()
	{
		v1 = 0;
		v2 = 0;
	}
	Wektor2D(double x, double y)
	{
		v1 = x;
		v2 = y;
	}
	void setX(double variable) { v1 = variable; }
	void setY(double variable) { v2 = variable; }
	double getX() { return v1; }
	double getY() { return v2; }

private:
	double v1;
	double v2;
};

Wektor2D operator+(Wektor2D sk³adnik1, Wektor2D sk³adnik2)
{
	return Wektor2D{ sk³adnik1.getX() + sk³adnik2.getX(), sk³adnik1.getY() + sk³adnik2.getY()};
}

Wektor2D operator*(Wektor2D sk³adnik1, Wektor2D sk³adnik2)
{
	return Wektor2D{ sk³adnik1.getX() * sk³adnik2.getX(), sk³adnik1.getY() * sk³adnik2.getY() };
}