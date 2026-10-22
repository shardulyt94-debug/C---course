#include <iostream>

using namespace std;

int main(){
/*
    int engmarks [] = {23, 45, 56, 89};
    // above i wrote int marks[], we should always keep the [] empty c++ compiler is smart enough 
    cout<<engmarks[0]<<endl;
    cout<<engmarks[1]<<endl;
    cout<<engmarks[2]<<endl;
    cout<<engmarks[3]<<endl;
    cout<<endl;


    // there is another way also to make an array let's see an example for that 
    int mathMarks[4];
    mathMarks[0] = 6625;
    mathMarks[1] = 6664125;
    mathMarks[2] = 6646725;
    mathMarks[3] = 6648625;

    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    cout<<endl;


    // you also can overwrite the value of an array too , let's see this by an another example
    int sciMarks[] = {69, 96, 108, 56};
    cout<<sciMarks[0]<<endl;
    cout<<sciMarks[1]<<endl;
    sciMarks[2] = 697; // <-- just tellin that i also could've typed this before printing for making the program look more clean.
    cout<<sciMarks[2]<<endl;
    cout<<sciMarks[3]<<endl;
    cout<<endl;

    // We can also print the marks using loops let's see an example 

    for (int i = 0; i < 4; i++)
    {
        cout<<"The marks in sci subject of "<<i<<" is: "<<sciMarks[i]<<endl;
    }
    
    cout<<endl;

    // also if i would have typed this for loop after printing math marks then the compiler would have printed math marks so it's like we don't have to declare a variable each time 
    // to write the loop just write the loop after you declare the interger and you're done lets see an example to prove the statement that i just wrote

    int bioMarks[] = {45, 87, 98, 56};

    for (int i = 0; i < 4; i++)
    {
        cout<<"The marks in bio of "<<i<<" is: "<<bioMarks[i]<<endl;
    }
*/
    // pointers in arrays

    int marks[] = {78, 54, 68, 45};
    cout<<marks<<endl; // <-- this line prints the address of first number stored in array i.e 78
    // note marks khud pointer variable nahi hai — usko tu reassign nahi kar sakta (marks = &x; ye galat hoga). 
    //Ye ek constant address hai jo compile time pe fix ho jaata hai. Isliye isse "decays into a pointer" kehte hain — behave pointer jaisa karta hai, but hai nahi.
    cout<<&marks[0]<<endl; // <-- this line also prints the address of first number stored in array i.e 78

    // ab sikhte hain pointer se array access krna
    int*p = marks;
    // marks already ek address hain isiliye '&' lagane ki koi jarurat ni hain 

    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    
    
    return 0;
}