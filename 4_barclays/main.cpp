#include<iostream>
#include <memory>
#include"date.hpp"
#include"payment.hpp"

int main(int argc, char **argv) {
	Date d = { 2012, 1, 2 };
	auto p = std::make_unique<Payment>(d, 100, 0.05);
	Date d_exp = { 2013, 1, 2 };
	std::cout << "Value " << p->value(d_exp) << "\n";
	return 0;
}
