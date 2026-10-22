#include <iostream>

using namespace std;

inline int product(int a,int b){
    //static int c=0;
    //c = c+1;
    return a*b;
}
/*
    static int c=0; 
    c=c+1;

    this means that when the first "cout<<"The product is :"<<product(a,b)<<endl;" will run it will call product function then initialise with c=0 add one in it and return the final answer
    similarly when this runs on second time "cout<<"The product is :"<<product(a,b)<<endl;" it will call the product function and by deafult c will be 1 there then, c will become 2 and will make final answer as 32
    static int c=0; wali line sirf ek baar, pehli call pe chalti hai.
    Doosri call pe ye line skip ho jaati hai, aur c mein pichli value hi rehti hai. c function khatam hone ke baad bhi value yaad rakhta hai.

    NOTE: WE CAN USE INLINE WITH STATIC 
like this :
    inline int product(int a,int b){
    static int c=0;
    c = c+1;
    return a*b+c;

    but logic of working is Compiler body copy karta hai, lekin static int c ko copy nahi karta. 
    Wo c ko function ke andar se nikaal kar ek global jaisi jagah (memory ka wo hissa jo program ke poore time tak rehta hai) mein rakh deta hai. 
    Phir har inline copy usi ek c ko use karti hai. aur c apne vlaue ko yaad rakhta hai (static ki vajeh se) har baar use mein aane k baad isiliye har call pe c ki value badh jati hai 

    Inline hata bhi do, to static apna kaam same karega. inline sirf ye decide karta hai ki call hoti hai ya body copy hoti hai, aur c dono hi case mein shared rehta hai.
*/

// Default Value 
float moneygot(int currentmoney, float interest=1.04){ // Ek important rule: default values hamesha right side (end) ke parameters ko milti hain.
    return currentmoney*interest; // float moneygot(int currentmoney, float interest=1.04)   // sahi
                                  // float moneygot(int currentmoney=100, float interest)    // galat, error aayega
}

int main(){
    /*int a; 
    int b;
    cout<<"Enter value of a"<<endl;
    cin>>a;
    cout<<"Enter value of b"<<endl;
    cin>>b;

    cout<<"The product is :"<<product(a,b)<<endl;
    cout<<"The product is :"<<product(a,b)<<endl;
    cout<<"The product is :"<<product(a,b)<<endl;
    cout<<"The product is :"<<product(a,b)<<endl;
    cout<<"The product is :"<<product(a,b)<<endl;

// inline compiler function call ki jagah function ki body ko seedha copy-paste kar deta hai.
// ex. se samjo 
// cout << product(a,b);
// compile ke baad kuch aisa ban jaata hai:
// cout << a*b;
// Isse function call ka overhead bachta hai. (Overhead = extra kaam jaise arguments stack pe daalna, function pe jump karna, return karke wapas aana.)


/*
    ab ham har function ko inline kyon nahi likhte?
    kyon ki pehli baat toh inline function ki body ki copy bana deta hai jisse overhead kam ho, ab agar hamare case ke alawa hamne koi bada function le liya
    toh maan lo 50 line ka function 100 baar call karra hai toh inline ki vajeh se 5000 line ka code ban jayega, isse program ka size badh jayega bhot aur prgram slow ho jayega 
    mtlb inline hamne prgoram ko fast banane k liye use kiya tha par iss case mein ulta ho gaya isiliye hamn inline har function k liye nahi use krte 
*/
int money;
cout<<"Enter amount of meony u have in ur acc"<<endl;
cin>>money;
cout<<"u have "<<money<<"in ur acc, you'll get "<<endl<<moneygot(money)<<endl<<"within one year"<<endl;
cout<<"u are vip guy how much u have "<<money<<"in ur acc, you'll get "<<endl<<moneygot(money, 1.5)<<endl<<"within one year"<<endl;

    return 0;
}