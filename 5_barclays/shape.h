#pragma once
#include<vector>

class Shape {
public:
	Shape() {};
	virtual ~Shape() = default;
	virtual size_t number_sides() const = 0;
	virtual double area() const = 0;
};

class Triangle: public Shape {
public:
	Triangle(double a, double b, double c);
	size_t number_sides() const override {
		return this->sides.size();
	}
	double area() const;
private:
	std::vector<double> sides;
};

class Regular_hexagon: public Shape {
public:
	Regular_hexagon(double a);
	size_t number_sides() const override {
		return this->sides.size();
	}
	double area() const override;
private:
	std::vector<double> sides;
};

class Rectangle: public Shape {
public:
	Rectangle(double a, double b) :
			sides { a, b } {
	}
	size_t number_sides() const override {
		return 4;
	}
	double area() const override {
		return this->sides[0] * this->sides[1];
	}
private:
	std::vector<double> sides;
};
