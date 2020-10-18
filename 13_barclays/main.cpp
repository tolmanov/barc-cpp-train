#include <iostream>
#include<ctime>
#include<set>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>
#include<typeinfo>


template <class T>
bool vector_contains(const T& value, const std::vector<T>& v);


int main(int argc, char **argv) {
    std::vector<int>vec{9, 1, 2, 3, 4, 5};
    std::cout<<"Assumed result: true, obtained:"<< vector_contains<int>(5, vec)<<std::endl;
    std::cout<<"Assumed result: false, obtained:"<< vector_contains<int>(0, vec)<<std::endl;

}

// -------== std::find implementation ==---------
// template<class T>
// bool vector_contains(const T& value, const std::vector<T>& v) {
//   auto it = std::find(v.begin(), v.end(), value);
//   if (it != v.end()) return true;
//   else return false;    
// }

// -------== std::find_if implementation ==---------
// template<class T>
// bool vector_contains(const T& value, const std::vector<T>& v) {
//     auto IsEqual_v = [&](const T a) {return a==value;};
//     // std::cout << "Lambda type is: " << typeid(IsEqual_v).name() << "\n";
//     auto it = std::find_if(v.begin(), v.end(), IsEqual_v);
//     if (it != v.end()) return true;
//     else return false;    
// }
// -------== std::any_of implementation ==---------
// template<class T>
// bool vector_contains(const T& value, const std::vector<T>& v) {
//     auto IsEqual_v = [&](const T a) {return a==value;};
//     bool it = std::any_of(v.begin(), v.end(), IsEqual_v);
//     if (it) return true;
//     else return false;    
// }

// -------== std::find_first_of implementation ==---------
// template<class T>
// bool vector_contains(const T& value, const std::vector<T>& v) {
//     std::vector<T>lookup_v{value};
//     auto it = std::find_first_of(v.begin(), v.end(), lookup_v.begin(), lookup_v.end());
//     if (it != v.end()) return true;
//     else return false;    
// }

// -------== std::count implementation ==---------
// template<class T>
// bool vector_contains(const T& value, const std::vector<T>& v) {
//     int it = std::count(v.begin(), v.end(), value);
//     if (it > 0) return true;
//     else return false;    
// }
// 
// -------== std::lower_bound implementation (14) ==---------
// template<class T>
// bool vector_contains(const T& value, const std::vector<T>& v) {
//     std::vector<T> v_sorted(v);
//     std::sort(v_sorted.begin(), v_sorted.end());
//     auto it = std::lower_bound(v_sorted.begin(), v_sorted.end(), value);
//     if (*it == value) return true;
//     else return false;    
// }
 
 
// -------== std::accumulate implementation (15) ==---------
template<class T>
bool vector_contains(const T& value, const std::vector<T>& v) {
    auto IsEqual_v = [&](const T accum, const T curr_elem) {
        return (curr_elem==value) ? accum + 1: accum;};
    auto it = std::accumulate(v.begin(), v.end(), 0, IsEqual_v);
    if (it > 0) return true;
    else return false;    
}

