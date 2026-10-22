/*
 There are two types of header files :
 1. System header file
 2. User defined header file
*/


//--> this is a system header file
#include <iostream> 


// #include "this.h" --> this is a user defined header file type, remember "this.h" must be present in the current directory otherwise it'll print an error!!
using namespace std;

int main(){


    int a=4, b=5;

   // cout<<"This program is written to help ya understand header files and operators in cpp." <<endl;
   // cout<<"Now we will also look for operators in cpp.\n";

   // OPERATORS : Operators in C++ are special symbols that instruct the compiler to perform specific mathematical, logical, or data manipulations on values and variables (called operands).

    // now we will see how an operator works:
    
    //1. Arithmatic operator ( Used to do arithmetic operations )

    cout<<"The sum of a&b is:"<<a+b <<endl;
    cout<<"The substarction of a&b is:"<<a-b <<endl;
    cout<<"The product of a&b is:"<<a*b <<endl;
    cout<<"The division of a&b is:"<<a/b <<endl; // When u will run this you will get the result of a/b =0 becoz this operator outputs integral values and a/b =.8 in our case that's why.
    cout<<"The value of a%b is:"<<a%b <<endl; // The sign "%" is called as 'Modulus operator' which outputs the remainder left when a was divided by b 
    cout<<endl;

    cout<<"The following are also arithmetic operators" <<endl;
    cout<<"The value of a++ is:"<<a++ <<endl; // we told the program that on next line when it'll EXECUTE NEXT LINE it will add 1 in it but the output of this current line will be only value of a.
    cout<<"The value of a-- is:"<<a-- <<endl; // we told the program that on next line when it'll EXECUTE NEXT LINE it will substract 1 from it.
    cout<<"The value of ++a is:"<<++a <<endl; // we told the program that when you will EXECUTE THIS LINE you will first do the increment i.e add 1 then print a hence it prints 5 i.e 1+4
    cout<<"The value of --a is:"<<--a <<endl; // we told the program that when you will EXECUTE THIS LINE you will first do the substraction i.e substract 1 then print a hence it prints 3 i.e -1+4
    cout<<endl;

    //2. Assignment Operators ( Used to assign values to variables )

    /*
    This is how an assigment operator looks like: 
    
    int a=6, b=7;

    char d='d';
    
    */

    // 3. Comaparison Operators :

    // These operators are used to comapre

    cout<<"The following are Comparison Operators"<<endl;
    cout<<"The value of a==b is:"<<(a==b) <<endl;
    cout<<"The value of a!=b is:"<<(a!=b) <<endl; // We write not equal to as '!='
    cout<<"The value of a>b is:"<<(a>b) <<endl;
    cout<<"The value of a<b is:"<<(a<b) <<endl;
    cout<<"The value of a>=b is:"<<(a>=b) <<endl;
    cout<<"The value of a<=b is:"<<(a<=b) <<endl;
    cout<< endl;

    //  NOTE: in this comparison operator when the condition will get satisfied the program will print 1 & when the condition will not staisfy the program will print 0.

    

    // 4. Logical Operators: these are just like the logic gate topic in class 11/12 

    cout<<"The following are Logical Operators in C++:" <<endl;
    cout<<"The value of ((a==b) && (a<b)) is:" <<((a==b) && (a<b)) <<endl; // it behaves just like 'AND' gate 
    cout<<"The value of ((a==b) || (a<b)) is:" <<((a==b) || (a<b)) <<endl; // this behaves like an 'OR' gate
    cout<<"The value of (!(a==b)) is:" <<(!(a==b)) <<endl; // this one behaves just like 'NOT' gate

    return 0;
}