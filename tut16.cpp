#include <iostream>

using namespace std;

int sum(int a, int b) {
    int c=a+b;
    return c;
}

void swap(int* a ,int* b) {   // temp a b
    int temp = *a;            // 4    4 5
    *a = *b;                  // 4    5 5
    *b = temp;                // 4    5 4
}
    

void swapRefVar(int a ,int b) { // temp a b  // void means this function returns nothing 
    int temp = a;               // 4    4 5
    a = b;                      // 4    5 5
    b = temp;                   // 4    5 4
}

int main() {
    // Call by reference using pointers
      int x=4,y=5;
     cout<<"The value of x is: "<<x<<" and value of y is: "<<y<<endl;
     swap(&x,&y);
    cout<<"The value of x is: "<<x<<" and value of y is: "<<y<<endl;

// You're modifying the memory that x and y live in, so the change survives after swap returns.

    // Call by C++ Reference Variables
    int m = 3 , n = 9;
    cout<<"The value of m is: "<<m<<" and value of n is: "<<n<<endl;
    swapRefVar(m, n);
    cout<<"The value of m is: "<<m<<" and value of n is: "<<n<<endl;

    return 0;
}