#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> only_odds(const vector<int>&vec){
    vector<int> odd_nums;

    for (int i = 0;i < vec.size(); i++){
        if (vec[i] % 2 != 0){
            odd_nums.push_back(vec[i]);
        }
    }
    return odd_nums;
}

