#include <iostream>
#include<ctime>
#include<set>
#include<vector>
#include<algorithm>

class Animal{
  public:
    Animal();
    ~Animal();
};

void func();

Animal::Animal(){
      std::cout<<"I am in constructor\n";
}

Animal::~Animal(){
      std::cout<<"I am in destructor\n";
}
void func(){
  Animal rabbit;
  throw 2;
}

int main(int argc, char **argv) {
  try{
    func();
  }
  catch(int e)
  {
    std::cout<<"Exception occured. Caught="<< e<< "\n";
  }
  return 1;	
}

