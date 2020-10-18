#include <iostream>

class myclass{
    int a,b,c;
public:
    myclass(int a, int b, int c): a{a}, b{b}, c{c} {}
};


int main(int argc, char **argv) {
    myclass v(1, 2 ,3);
    // std::vector<int>vec{9, 1, 2, 3, 4, 5};
    // std::cout<<"Assumed result: true, obtained:"<< vector_contains<int>(5, vec)<<std::endl;
    // std::cout<<"Assumed result: false, obtained:"<< vector_contains<int>(0, vec)<<std::endl;

}
