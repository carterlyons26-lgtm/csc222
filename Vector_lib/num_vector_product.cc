#include <string>
#include <vector>
#include <iostream>
using namespace std;


int num_vector_product(const vector<int>&vec){
    int product = 1;
    for (int i = 0; i < vec.size(); i++){
        product *= vec[i];
    }
    return product;
}
