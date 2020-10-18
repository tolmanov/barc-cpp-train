#include <iostream>
#include<ctime>
#include<set>
#include<vector>
#include<algorithm>

int main(int argc, char **argv) {

	std::set<int> myset;
	std::vector<int> myvec;
	while (myset.size() != 100000) {
		int r = rand();
		if (myset.count(r) == 0) {
			myset.insert(r);
			myvec.push_back(r);
		}
	}
	std::vector<int> search_ind;
	for (int i=0; i<20000; i++){
		search_ind.push_back(rand() % 100000);
	}
	auto t(std::clock());
	for(const int &i: search_ind){
		int search_val = myvec[i];
		auto it = std::find(myvec.begin(), myvec.end(), search_val);
		if (it != myvec.end()) continue;
		else continue;	
	}
	auto elapsed = std::clock() - t;
	std::cout << "Time taken for vector: " << static_cast<double>(elapsed) / CLOCKS_PER_SEC
			<< "s." << std::endl;
	auto t_set(std::clock());
	for(const int &i: search_ind){
		auto search_val = myvec[i];
		auto it = myset.count(search_val);
		if (it != 0) continue;
		else continue;	
	}
	auto elapsed_set = std::clock() - t_set;
	
	std::cout << "Time taken for set: " << static_cast<double>(elapsed_set) / CLOCKS_PER_SEC
			<< "s." << std::endl;
	return 0;
}
