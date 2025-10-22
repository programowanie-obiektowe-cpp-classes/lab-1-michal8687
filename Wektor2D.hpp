class Wektor2D
{
public:
	Wektor2D()
	{
		v_x = 0;
		v_y = 0;
	}
	Wektor2D(double x, double y)
	{
		v_x = x;
		v_y = y;
	}
	void setX(double variable) { v_x = variable; }
	void setY(double variable) { v_y = variable; }
	double getX() { return v_x; }
	double getY() { return v_y; }

private:
	double v_x;
	double v_y;
};

Wektor2D operator+(Wektor2D skladnik1, Wektor2D skladnik2)
{
	return Wektor2D{ skladnik1.getX() + skladnik2.getX(), skladnik1.getY() + skladnik2.getY()};
}

double operator*(Wektor2D skladnik1, Wektor2D skladnik2)
{
	return skladnik1.getX() * skladnik2.getX() + skladnik1.getY() * skladnik2.getY();
}