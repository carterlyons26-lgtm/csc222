#include <string>
#include <vector>
using namespace std;

int num_vector_sum(const vector<int>&vec){
    int sum = 0;
    for (int i = 0; i < vec.size(); i++){
        sum += vec[i];
    }
    return sum;
}
