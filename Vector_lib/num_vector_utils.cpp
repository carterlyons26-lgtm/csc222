#include <string>
#include <vector>
#include <iostream>
using namespace std;

string render_num_vector(const vector<int>& vec) {
    string s = "";
    for (int i = 0; i < vec.size(); i++){
        s += to_string(vec[i]);
        if (i < vec.size() - 1){
            s += " ";  
        }
    }
    return s;
}
