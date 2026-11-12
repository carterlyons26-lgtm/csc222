#include <string>
#include <vector>
using namespace std;


vector<int> nums_between(const vector<int>&vec, int a, int b){
    vector<int> nums; 

    for (int i = 0; i < vec.size(); i++){
        if (vec[i] <= b && vec[i] >= a){
            nums.push_back(vec[i]);
        }
    }
    return nums;
}
