#include <iostream>

using namespace std;

void wont_swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}


void swaps_refrence(int &a, int &b) { 
    int temp = a; 
    a = b; 
    b = temp; 
} 

void swaps_pointers(int *a, int *b) { 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 

int main() { 
    int x = 20; 
    int y = 42; 
    
    cout << "x: " << x << " y: " << y << endl; 
    cout << "address of x: " << long(&x) << endl; 
    cout << "address of y: " << long(&y) << endl; 
    
    cout << "Calling wont_swap..." << endl; 
    wont_swap(x, y);
    cout << "x: " << x << " y: " << y << endl; 
    
    cout << "Calling swaps_pointers..." << endl; 
    swaps_pointers(&x, &y); 
    cout << "x: " << x << " y: " << y << endl; 
    
    cout << "Calling swaps_refrence..." << endl; 
    swaps_refrence(x, y);
    cout << "x: " << x << " y: " << y << endl; 
    
    return 0; 
    
}
