#include <iostream>
using namespace std;

int main(){

    /*int i;

    for ( i = 0; i < 10; i++)
    {
        
        cout<<i<<endl;
        
        if (i==2)
        {
            break;
        }
        // in this way we tell the program that you will count before 10 but you will stop giving output at 2 
    }*/
    
    // Now We'll Write Another For Loop To Go Back And Then Run The Loop i mean till now all loops that we ran were pushing the code forward to skip some cases and print the outcome if a case is already staisfied
    // but this time we'll tell the code that once you see a condition satisfy you will go back with the help of the loop

    int i;

    for ( i = 0; i <40; i++)
    {
        cout<<i<<endl;
        
        if (i==2)
        {
            continue;
        }
        // continue ek "is baar ka kaam yahi tak, seedha agle round mein chalo" wala signal hai — poore loop ko rokne wala nahi.
        // break = break ka matlab hai — poore loop ko turant band kar do, bahar nikal jao. Ye continue se bilkul opposite hai.
    }
    
    // SO use cases of continue = Kisi specific case ko skip karna ho, baaki loop chalu rakhna ho
    // use case of break = Kisi condition milte hi loop se bahar nikalna ho (jaise koi value dhoondh li, ab aage check karne ki zarurat nahi)

    return 0;
}