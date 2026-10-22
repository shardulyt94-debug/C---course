#include <iostream>

using namespace std;

    struct employee
    {
        int eId;
        char favchar;
        float salaray;
    };
    
    // Yeh sirf design/blueprint hai — abhi tak koi actual memory allocate nahi hui. Jaise form ka template print kiya, lekin kisi ne fill nahi kiya.

    // After Strcut we'll see union 

    union money
    {
        int rice;
        char car;
        float pound;
    };
    
    // Union struct jesa he hai but better memory manage kr skta hai becoz jo bhi data type sabse jyada storage leta hai wahi storage baki data types ke accross share ho jati hai and ek time pe ek he data type 
    // access ho skta hai that's why pichla likha hua data type overwrite ho jata hai and memory manage ho jati hai 


int main(){

    // Struct = apna custom "box" banane ka tarika, jisme related data ek saath store ho aur woh related data alag-alag type ka bhi ho skta hain just like in this example.

    /*
    struct employee Shardul;
    Shardul.eId = 1;
    Shardul.favchar = 's'; // <-- here i typed 'Shardul.favchar' now the '.' is not a dot here it's called a dot operator and mene dot operator se se data access kiya  
    Shardul.salaray = 690000000;
    
    cout<<endl;

    cout<<"The value is:" <<Shardul.eId<<endl;
    cout<<"The value is:" <<Shardul.salaray<<endl;
    cout<<"The value is:" <<Shardul.favchar<<endl;

    // you can also do the same in typedef & ep 
    // Changes : 1. Jo int main() k pehle likha hain usme struct k pehle typedef likhdo and line 10 pe } k baad ep likhdo 
    // then ab tumhe 'struct employee Shardul' nahi likhna hoga uske alawa 'ep shardul' likhna hoga 
*/

    // Now let's see what is union 
    
    union money m1;
    
    m1.rice = 69;
    m1.car = 'a';
    m1.pound = 69.69;

   
    cout<<"The value is:" <<m1.rice<<endl;

    // now let's understand enum(Enumeration) also 
    // Enum (Enumeration) ek user-defined data type hai jo related constants ko naam deta hai, taaki code readable aur maintainable ho.

    enum meal { breakfast, lunch, dinner };
    
    // Har naam ko ek integer value assign hoti hai, by default 0 se start hoke increment hoti jaati hai yane ki apne case mei , breakfast = 0 , lunch = 1 , dinner = 2 

    // toh agar mei enum ka content print karwau 


    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;


    return 0;
}