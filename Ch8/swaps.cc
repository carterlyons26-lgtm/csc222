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
    int num1;
    int num2;
    int call;
    cout << "Please enter in one number: ";
    cin >> num1;
    
    cout << "Please enter another: ";
    cin >> num2;

    cout << "x: " << num1 << " y: " << num2 << endl; 
    cout << "address of x: " << long(&num1) << endl; 
    cout << "address of y: " << long(&num2) << endl; 
    

    cout << "enter 1: call wont_swap \nenter 2: call_swaps \nenter 3: calls swaps_refrence\n";
    cin >> call;
    

    if (call == 1){
    cout << "Calling wont_swap..." << endl; 
    wont_swap(num1, num2);
    cout << "x: " << num1 << " y: " << num2 << endl; 
    }

    if (call == 2){
    cout << "Calling swaps_pointers..." << endl; 
    swaps_pointers(&num1, &num2); 
    cout << "x: " << num1 << " y: " << num2 << endl; 
    }

    if (call == 3){
    cout << "Calling swaps_refrence..." << endl; 
    swaps_refrence(num1, num2);
    cout << "x: " << num1 << " y: " << num2 << endl; 
    }
    
    return 0; 
    
}
