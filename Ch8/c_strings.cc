#include <iostream>
using namespace std;


void str_len(char n[]){
    int i = 0;
    while (n[i]){
        n[i++];        
    }
    cout << "Length of C string: " << i << endl;
}


int main(){
    char c_string = "test";
    str_len(c_string);
    return 0;
}

