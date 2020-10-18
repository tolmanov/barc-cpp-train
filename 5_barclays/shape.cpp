#include"shape.h"

#include<numeric>
#include<math.h>

Triangle::Triangle(double a, double b, double c) {
	if ((a < 0) || (b < 0) || (c < 0))
		throw(-1);
	if ((a + b <= c) || (a + c <= b) || (b + c <= a))
		throw(0);
	this->sides = { a, b, c };
}

double Triangle::area() const {
	double p = std::accumulate(this->sides.begin(), this->sides.end(), 0) / 2;
	double area = sqrt(
			p * (p - this->sides[0]) * (p - this->sides[1])
					* (p - this->sides[2]));
	return area;
}

Regular_hexagon::Regular_hexagon(double a) {
	if (a < 0)
		throw(-1);
	for (int i = 0; i < 6; i++) {
		this->sides.push_back(a);
	}
}
double Regular_hexagon::area() const {
	return 3 * sqrt(3) * pow(this->sides[0], 2) / 2;
}
