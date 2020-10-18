#include"shape.h"
#include<iostream>
#include<memory>
#include<vector>

double sum_of_areas(std::vector<std::shared_ptr<Shape>> vec);

int main(int argc, char **argv) {

	auto tr = std::make_shared<Triangle>(3, 4, 5);
	std::cout << "Number of side:" << tr->number_sides() << " Area: " << tr->area() << "\n";
	auto vec = std::vector<std::shared_ptr<Shape>>{tr};

	auto rec = std::make_shared<Rectangle>(4, 5);
	std::cout << "Number of sides: " << rec->number_sides() << " Area:" << rec->area() << "\n";
	vec.push_back(rec);

	auto hex = std::make_shared<Regular_hexagon>(4);
	std::cout << "Number of sides: " << hex->number_sides() << " Area:"<< hex->area() << "\n";
	vec.push_back(hex);

	std::cout << "Overall area: " << sum_of_areas(vec) << "\n";
}

double sum_of_areas(std::vector<std::shared_ptr<Shape>> vec){
	double sum = 0;
	for (auto const& i: vec){
		sum += i->area();
	}
	return sum;
}
