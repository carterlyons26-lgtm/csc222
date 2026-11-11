#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> only_evens(const vector<int>&vec){
    vector<int> even_nums;

    for (int i =0; i < vec.size(); i++){
        if (vec[i] % 2 == 0){
            even_nums.push_back(vec[i]);
        }
    }
    return even_nums;
    
}
