#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

double F(double x1, double x2) {
    return -(x1 * x1 * x2 - 10 * x1 * x1 + 26 * x1 * x2 - 260 * x1 + x2 * x2 * x2 - 30 * x2 * x2 + 460 * x2 - 2599);
}

double zol1(double x1) {
	
	//metod svena
	double a = 8.267;
	double t = 0.001;
	double b = a + t;
	while (true)
	{
		if (F(x1, a) < F(x1, b))
		{
			a = b;
			b += t;
		}
		else break;
	}
	a -= t;
	//zol
	double g = (sqrt(5) + 1) / 2;
	double c, d, x, eps = 0.0001;
	c = b - (b - a) / g;
	d = a + (b - a) / g;
	while (fabs(c - d) > eps) {
		if (F(x1, c) < F(x1, d))
		{
			b = d;
		}
		else {
			a = c;
		}

		c = b - (b - a) / g;
		d = a + (b - a) / g;
		return x = (b + a) / 2;

	}
}



double zol2(double x2){
	//metod svena              
	double a = -13.1;
	double t = 0.001;
	double b = a + t;
	while (true)
	{
		if (F(b, x2) < F(a, x2))
		{
			a = b;
			b += t;
		}
		else break;
	}
	a -= t;
	//zol
	double g = (sqrt(5) + 1) / 2;
	double c, d, x, eps = 0.0001;
	c = b - (b - a) / g;
	d = a + (b - a) / g;
	while (fabs(c - d) > eps) {
		if (F(c, x2) < F(d, x2))
		{
			b = d;
		}
		else {
			a = c;
		}

		c = b - (b - a) / g;
		d = a + (b - a) / g;
		return x = (b + a) / 2;
	}

}



int main()
{
	double eps = 0.001;
	double x[2] = { 0,0 };
	double x_temp[2] = { 1,1 };
	int i = 0;


	ofstream out;
	out.open("b.txt");
	out << x[0] << " " << x[1] << endl;
	//metod pokoordinatnogo spuska
	while ((abs(x[0] - x_temp[0]) > eps) && (abs(x[1] - x_temp[1]) > eps))
	{

		i++;
		x_temp[0] = x[0];
		x_temp[1] = x[1];
		x[1] = zol1(x[0]);
		out << x[0] << " " << x[1] << endl;
		x[0] = zol2(x[1]);
		out << x[0] << " " << x[1] << endl;


	}
	cout << "(x1,x2)=" << "(" << x[0] << "," << x[1] << ")" << endl;
	cout << "F(x1,x2)=" << F(x[0], x[1]) << endl;
	cout << "iter=" << i;

	return 0;


}

