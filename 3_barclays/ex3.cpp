#include"ex3.hpp"

std::vector<int> reverse(std::vector<int> arr){
	std::vector<int>res(arr.size());
	for(int i=0; i<arr.size(); i++){
		res[i]=arr[arr.size()-i-1];
	}
	return res;
}
