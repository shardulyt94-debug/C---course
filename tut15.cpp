#include <iostream>

using namespace std;

/*int sum(int a, int b) {
    int c=a+b;
    return c;
}
*/ 
// <-- the sum function should be here if definition function ke pehle hai

// but for understanding Function prototyping 

// Prototype basically ek announcement hota hai compiler ke liye — ki "bhai aage ek function aayega jiska naam yeh hai, yeh cheezein leta hai, aur yeh return karta hai." 
//Sirf signature hota hai, body nahi

// int sum(int a, int b); // <-- this is how we do function prototyping 
// also this way too 
int sum(int , int);
void g();


int main() {

    // functions are an important part of top-down structured program 

    // aur function ka kaam bs itna hai ki apne program ko chote chote parts mei break karo and un parts se kaam karva ke lo 
    // it's like agar hame koi kaam karwana hai and woh hamesha repeat hote jata hai then ham ek system banayenge like system ek baar banao aur kaam always karo 

    int num1, num2;

    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;

    cout<<"The sum is:"<<sum(num1, num2)<<endl;
    g();
    return 0;
}

// Formal Parameters
//The variables which are declared in the function are called a formal parameter. For example, as shown in Code Snippet 1, the variables “a” and “b” are the formal parameters.
// Actual Parameters
//The values which are passed to the function are called actual parameters. For example, as shown in Code Snippet 2, the variables “num1” and “num2” are the actual parameters.

int sum(int a, int b) {
    int c=a+b;
    return c;
}

void g(){
cout<<"Hii, Good Morning !";
}

// !!!!!!!! NOTE
//Prototype (void g();) → sirf announcement, "yeh function exist karta hai"
//Definition (void g(){ cout<<"Hii..."; }) → function ka actual code, kya karna hai woh
//Call (g();) → ab jaake function chalega, warna woh bas defined pada rahega, kabhi execute nahi hoga
