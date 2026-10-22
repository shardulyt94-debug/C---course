#include <iostream>

using namespace std;

// Recursion ka matlab hai ek function ka apne aap ko call karna, par har baar input ko thoda chhota karke, jab tak ek base case na mil jaaye jahan wo ruk kar seedha answer de de.
// Program ki readability mtlb code padhne mein kitna aasaan hai, khaaskar koi aur ya tum 3 mahine baad bhi usse bina dimag lagaye samajh sako.

int factorial(int n){
    if (n<2){ // <-- yeh base case hai 
        return 1;
    }
    return n*factorial(n-1); // <-- agar hamne is function block ko else mein daal iya base case k toh return mein kya likhenge?
}

/*
ham yeh function ese bhi likh skta hai program ki readability badhane k liye 
int factorial(int n){
    if (n<2){
        return 1;              // base case
    }
    else {
        return n*factorial(n-1);   // recursive case
    }
}
mera doubt ka conclusion : Logically: if-else mein dono raste (branches) return kar rahe hain. n < 2 true ho ya false, 
function kisi na kisi return pe pahunch hi jayega. To alag se function ke end mein koi extra return likhne ki zaroorat nahi hai.

yeh factorial(4) kese nikala gaya:
factorial(4) = 4 * factorial(3) <-- ahi tk base case meet nahi hui toh fir next step pe jump kro ( firse frctorial wala function khud ko call karega cuz base case meet nai hui )
factorial(3) = 4 * 3 * factorial(2) <-- firse run hoga function 
factorial(2) = 4 * 3 * 2 factorial(1) <-- ab function ko yeh bata chal gaya ki 1<2 hai toh base case satisfy ho gaya hai and 1 return krna hai 
ab base case ka 1 return krne k baad factorial function ka return pe ayega program toh finally yeh return hoga 
factorial(4) = 4 * 3 * 2 * 1 = 24
*/

int fib(int m){
    if (m<2){
        return 1;
    }
    return fib(m-1) + fib (m-2);
}

/*
flow kaisa tha iss fib function ka?
fib(4) <-- to calculate
fib (4) = fib(2) + fib(3)
fib (4) = fib(0) + fib(1) + fib(2) + fib(1)
fib (4) = fib(0) + fib(1) + fib(0) + fib(1) + fib(1) <-- since these all are base cases all fib will return 1 which will make our final answer as :5
*/

int main(){
    int a;
    int b;
    cout<<"Factorial calclator for any number"<<endl;
    cout<<"Enter any number :"<<endl;
    cin>>a;
    cout<<"The factorial of "<< a <<"is :"<<factorial(a)<<endl;
    
    cout<<"The term in fibonacci sequnce at position :"<<endl;
    cout<<"Fibonacci sequence calculator"<<endl;
    cout<<"The fib seq for :"<<b<<"is :"<<fib(b)<<endl; 
    cin>>b;

    // In this program we learnt about recursive functions, but you know recursive functions take more overhead because till base case satisfies it has to calculate more and more things while keeping
    // previous answers in memory  
    return 0;
}