#include <iostream>

using namespace std;


void str_len(const char n[]){
    int i = 0;
    while (n[i]){
        i++;        
    }
    cout << "Length of C string: " << i << endl;
}


int main(){
    char c_string[100];
    cout << "type in any word: ";
    cin >> c_string;

    str_len(c_string);
    return 0;
}

