#include <iostream>

using namespace std;



void garbage_in_out(){
    cout << "--------Garbage in, Garbage out--------\n\n" << endl;

    int arr[4];


    cout << "Reading uninitialized array elements " << endl;
    for (int i = 0;i < 4;i++){
        cout << "Index [" << i << "]: " << arr[i] << endl;
    }
    cout << "\n\n\n" << endl;

}


int main(){
    garbage_in_out();
    return 0;
}
