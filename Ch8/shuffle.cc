#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

void shuffle(int n[], int size) {
    std::random_device rd;
    std::mt19937 gen(rd());
   
    for (int i = size - 1; i > 0; --i) {
        std::uniform_int_distribution<int> distrib(0, i);
        int ran = distrib(gen);
        int temp = n[i];
        n[i] = n[ran];
        n[ran] = temp;
    }
}

int main() {
    int arr[] = {10, 9, 8, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    shuffle(arr, n);
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';

    return 0;
}
