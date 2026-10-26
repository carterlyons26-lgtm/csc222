#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;


void shuffle(int n[], int size) {
   
    for (int i = 0; i < size-1; i++){
        int ran = rand() % (i+1);
        int temp = n[i];
        n[i] = n[ran];
        n[ran] = temp;
    }
}

void pure_shuffle(int n[], int size){
    int copy[size];
    for (int i = 0; i <size;i++){
        copy[i] = n[i];
    }
     for (int i = 0; i < size-1; i++){
        int ran = rand() % (i+1);
        int temp = copy[i];
        copy[i] = copy[ran];
        copy[ran] = temp;
    }

}


int main() {
    srand(time(0));
    int arr[] = {10, 9, 8, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    shuffle(arr, n);
    pure_shuffle(arr, n);
    for(int i = 0;i<n;i++){
        cout<<arr[i] << " ";
    }
    cout << "\n";

    return 0;
    
}
