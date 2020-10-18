#include <iostream>
#include<ctime>
#include<set>
#include<vector>
#include<algorithm>

template <typename L>
std::vector<double> transform_vector(L l, const std::vector<double> & v);

int main(int argc, char **argv) {
  std::vector<double> v{1, 2, 0.5, 6};
  auto l = [](double x){return x*x;};
  //auto transformed = transform_vector(l, v);
    auto transformed = transform_vector([](double x){return x*x;}, v);
  for(auto const& val: transformed){
    std::cout<<"Value: "<< val<<"\n";
  }
    
  return 1;	
}

template <typename L>
std::vector<double> transform_vector(L l, const std::vector<double> & v){
  std::vector<double> v_transf;
  for(auto const& elem: v){
    v_transf.push_back(l(elem)); 
  }
  return v_transf;
}

