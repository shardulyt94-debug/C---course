#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    /*
    int a=34;
    cout<<"The value of a was:"<<a <<endl;

    a=45;
    cout<<"The value of a is:"<<a <<endl;
    */

    // Explanation that when we run the code above we get two different values of a 
    // jb mei int a = 34; likhta hu tb C++ RAM mein ek fixed memory location allocate krta hain us variable k liye (e.g adress 9618b), ab us box pe lable laga deta hain a and us box mein value 34 store ho jati hain.
    // jb mei cout<<a; krta hun tb c++ us store ki gayi value dekhta hain and apne ko bhejta hain just like a snapshot, ab jb mein a = 45 likh ta hun tb program ek naya variable nahi banata hain woh a ki he value ko update kr deta hain (Over right krna)
    // so overall Variable = ek locker jiska naam fixed hai but andar ka saamaan change ho sakta hai. Jab bhi tu locker khol ke dekhega (print karega), jo currently andar hai wahi milega — chahe pehle kuch aur tha.

    //******* NOW IF I DON'T WANT CHANGE THE VALUE OF A ************
    // For this we'll study Constants In C++

    // Contants in c++

   /*const int a = 3;
    cout<<"The value of a was :"<<a <<endl;
    a = 5;
    cout<<"The value of a is :"<<a <<endl;

     // Now u can see 'a' is highlighted by red underline in a = 5; it simply says that "you defined the value of 'a' earlier by a const now you cannot chnage it "
     // basically we made the value of our variable 'a' as a constant.
     // This "constant value of a" is useful in cases like you don't want to change the value of a variable like example you wrote value of pi , now pi is a universal constant so u write const so thet u never accidentally chaange the value of pi.


    // Manipulators in c++
    //Manipulators in c++ are used to present the data properly
    //e.g <<endl setw

    /*
    To use setw manipulator we need to include some files which are in iomanip folder so we wright "#include <iomanip>" in the starting before using setw
    */

/*    int a = 4, b = 69 , c = 6900; 
// Let's try without setw
    cout<<"The value of a is :"<<a <<endl;
    cout<<"The value of b is :"<<b <<endl;
    cout<<"The value of c is :"<<c <<endl;
    cout<<endl;

//Let's try with setw  
    cout<<"The value of a is :"<<setw(4)<<a <<endl;
    cout<<"The value of b is :"<<setw(4)<<b <<endl;
    cout<<"The value of c is :"<<setw(4)<<c <<endl;
    cout<<endl;  

    */
// setw(4) <-- this means that the program will now treat single digit number as 4 digit number see output for more clarity


//************** Operator Precedence and Associativity *******************

//Now sometimes we have to write some mathematical expression and for that we use BODMAS rule but in coding if the expression is way more complex then this 
// precedence operator is used, basically go to en.cppreference.com and search for this topic and you'll get a table noe according to it 
// you will prioritise that * or / or + or - and as u can see in the table / and * have same precedence so we use associativity i.e reading the expreesion from left-right OR right-left
// this all guidance is given in the cpp refernce website so schk that out and remember some of em they'll be useful 

// now let us se an example of using it 

int  a = 3 , b = 4 ;
int c = ((((a*5)+b)-45)+87);

cout<<c;


    return 0;
}