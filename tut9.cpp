#include <iostream>

using namespace std;

int main(){

    int age;

//cout<<"This is tutorial 9";
//*********************** This Program is An 'Selecive Control Structure with if-else ladder' 


    cout<<"Tell me your age"<<endl;
    cin>>age;
    

/*
    if (age<18){
        cout<<"You are not allowed to vote";
    }

    else if(age==18) {
        cout<<"You're a kid a you can still vote";
    }

    else {
        cout<<"You can do voting";
    }

*/

//**************************** This Program is An 'Selecive Control Structure with Switch Case Statements'

switch (age) //<-- Put your variable inside () to divide the value of you variable into cases
{
case 18:

    cout<<"You are 18"<<endl;
    break; // <-- For now break means jaha par bhi ho usko tod k bahar aa jao 

case 22:

    cout<<"You are 22"<<endl;
    break;

case 2:

    cout<<"You are 2"<<endl;
    break;

default:

cout<<"Sb cases ho gye hain ";
    break;
}

cout<<"Ab ho gaya switch case ka kaam and ghar jao ";

// after running this part of the program you can now understand that 'break' actually tells the program that if the given case gets satisfied then skip the other cases and directly jump to 
// the end , if you comment out 'break' then the program will print each case no matter what age you type. 
    return 0;
}