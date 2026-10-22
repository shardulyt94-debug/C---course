#include <iostream>

using namespace std;

int main(){
    // Pointers In C++
    // Pointers <-- pointers in c++ mean a data type which holds the address for other data types
    int a = 3;
    int* b = &a; // <-- This is An int star variable which shows address of a 
    
    // now by 'address of' i mean that : each variable that we declare here in the program gets stored in our computer's RAM so as we declared variable 'a'
    // the program stored value of a as 3 in our RAM somehwhere it's like when u go into an hotel your address is room number x , so in the same way here,
    // the room number for variable a is present in the RAM

    // 1. & <-- (Address of) Operator

    cout<<"The address of a is :"<<&a<<endl;
    cout<<"The address of a is :"<<b<<endl;

    // 2. * <-- (Value of) Derefence Operator
    cout<<"The value at address b is "<<*b<<endl;
    cout<<endl;

    // tho overall kisi variable k pehle & laga do tho uss variable ka apni memory mein address mil jata hain and
    // kisi variable ke pehle * laga do tho address pe jo value hain woh milti hain 

    // Pointer to Pointer

    int**c = &b;

    cout<<"The value at address of c is "<<&b<<endl;
    cout<<"The value at address of c is "<<c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
    cout<<endl;

    int***d = &c;

    cout<<"The value at address value_at(value_at(value_at(d))) is "<<***d<<endl;

    return 0;
}