#include <iostream>

using namespace std;

int sum(int a, int b){
    cout<<"Using function with 2 arguements :"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguements :"<<endl;
    return a+b+c;
}

int volume(int l, int b, int h){
    return l*b*h;
}

int volume(int r, int h){
    return 3.14*r*r*h;
}

int volume(int s){
    return s*s*s;
}



int main(){
    cout<<"Today we'll learn about function overloading"<<endl;

    // since both functions are having same name but with differenet number of arguements 
    // now we'll try to add same numbers and see that which function is getting called 
    // and to identify which function i sgetting called we'll add cout in the fnction body so that when that specific function runs we'll get to know which one ran 
    // and which one didn't ran ( the logic behind this identification by cout feels just like adding color to water to identify where did the water go )

    cout<<"The sum of 3 & 6 is :"<<sum(3,6)<<endl;
    cout<<"The sum of 3 & 6 is :"<<sum(3, 6, 8)<<endl; 
    // so basically the function call figured out which function to call by matching it's arguements

    // now we're calculating volumes of different shapes by using same function name i.e called as function overloading
    cout<<"The volume cubiod having dimentions of 3 & 6 & 8 is :"<<volume(3, 6, 8)<<endl; 
    cout<<"The volume cylinder having dimentions of 3 & 6 is :"<<volume(3, 6)<<endl;
    cout<<"The volume of cube having side 3 is :"<<volume(3)<<endl; 
    return 0;
}