#include <iostream>
#include <random>
using namespace std;


void shuffle(int n[], int size)
{
    std::random_device rd;
    std::mt19937 gen(rd()); 
    std::uniform_int_distribution<int> distrib(0, size-1);
    for (int i = 0; i < size; i++) 
    {
        int ran = distrib(gen);
        int temp = n[i];
        n[i] = n[ran];
        n[ran] = temp;
    }
   }



int main ()
{
    int arr[] = {10, 9, 8, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    shuffle(arr, n);
}
