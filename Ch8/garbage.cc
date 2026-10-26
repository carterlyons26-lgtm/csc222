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
void memory(){
    cout << "---------- memory unsafe ----------" << endl;


    int arr[3]={10,20,30};

    cout <<"\nBeyond array bounds: " << endl;
    for (int i = 0; i < 5;i++) {
           cout << "arr[" << i <<"] = " << arr[i];
           if (i>= 3){
                cout << " out of bounds!";
             }
             cout << endl;
          }
       }
int main(){
    garbage_in_out();
    memory();
    return 0;
}
