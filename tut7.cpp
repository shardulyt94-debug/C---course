#include <iostream>

using namespace std;

int c= 45;

int main() {

    int a, b, c;
// ****************** Built in Data Types******************
    /* 
    cout<<"Type the value of a:";
    cin>>a;

    cout<<"Type the value of b:";
    cin>>b;
    
    c = a + b;

    cout<<"The value is c is:" <<c <<endl;

    cout<<"The value of global c is:"<<::c <<endl; // '::' this is known as SCOPE RESOLUTION OPERATOR
    */
   
// *************** Float, Double & Long double literals **********


/*
    float d=34.4F;

    long double f=34.4L;

    cout<<"The size of 34.4 is:" <<sizeof(34.4) <<endl;
    cout<<"The size of 34.4F is:" <<sizeof(34.4F) <<endl;
    cout<<"The size of 34.4f is:" <<sizeof(34.4f) <<endl;
    cout<<"The size of 34.4L is:" <<sizeof(34.4L) <<endl;
    cout<<"The size of 34.4f is:" <<sizeof(34.4l) <<endl; 

    */


// ******************* Reference Variables ******************

/*
Now assume that your name is Rohan so,
your dad calls ya duggu,
your friends call ya rohu,
you call yourself as mitthu don

So it's like duggu, rohu, mitthu don and Rohan all are same names similarly we can give a variable other name also while it has it's own original name see this example below


*/

/* float x=69;

float & y = x; // so when we type this we tell the program that from now on i can call x as y also 

cout<<x<<endl;
cout<<y<<endl;

// so when i'll run this it will actually print 69 two times now i'm commenting it out but if u want then try it yourself 

*/

// ******************Typecasting*******************

// typecasting is used to change one data type to another data type

int u=45;

float i=9.96;

cout<<"The value of u is:" <<float(u) <<endl; // these four lines tell that you can do typecasting and in two ways i.e int() OR (int)
cout<<"The value of u is:" <<(float)u <<endl;
cout<<"The value of i is:" <<(int)i <<endl;
cout<<"The value of i is:" <<int(i) <<endl;

int m = int (u); // this tells the program that the value of u already exists you just have to make that value of u behave as integer and now we make a new integer called as m which will have value of u
// in-short int (u) ek naya alag int value banata hain u ki value ki copy leke usko int bana deta hain original u untouched hain

cout<<"The expression is:"<< u + i <<endl;
cout<<"The expression is:"<< u + int(i) <<endl;
cout<<"The expression is:"<< u + (int)i <<endl;


    return 0;
}



