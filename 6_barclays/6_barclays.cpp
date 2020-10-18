#include"rational.h"

int main(int argc, char **argv) {
	const rational<int> rat1(1,3);
	rational<int> rat2(1,6);
	auto x = rat1 + rat2;
	std::cout<<rat1;
	std::cout<<rat2;
	std::cout<<(rat1 + rat2);
}
