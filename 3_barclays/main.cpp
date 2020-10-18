#include"ex3.hpp"
#include<iostream>

int main(int argc, char **argv) {
	std::vector<int> inp;
	inp.push_back(3);
	inp.push_back(5);
	auto res = reverse(inp);
	for (auto &&x: res)
		std::cout<<x<<"\n";
	return 0;
}
