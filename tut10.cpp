#include <iostream>

using namespace std;

int main(){


    /*Loops in C++*/

    //Types of Loops
    //1. For loop
    //2.While loop
    //3.do-While loop

//1. For loop

    /*
    syntax for for loop
    for (initialization ; condition ; updation)
    {
    loop body( code in c++ )
    }
    */

    //int i;

    //for (int i = -69; i <= 40; i++)
    //{
        /* code */
       // cout<<i<<endl;
    //}

//2. While Loop

    //syntax 
    //while(condition)
    //{
    // c++ statements;
    //}


/* 
    int i=1 ;
    while(i<=40)
    {
        cout<<i<<endl;
        i++;
    }
*/

    //*****Infinite While Loop

    /* int i=1;
    while(34<=40)
    {
        cout<<i<<endl;
        i++;
    }
        */

// *************** Warning when u run c++ code the code runs very fast as compared to other coding languages and c++ is close to harware so it is used for harware management so keep your attension on memory allocation etc

    // 3. do-while loop
    //syntax
    //do
    //{
    // c++ statements;
    //} while(condition)

    
    /*int i = 1;
    do
    {
        cout<<i<<endl;
        i++;
    } while (i<=40);
*/
    // the output of do while loop is same as while loop but there is one tiny difference i.e it first at least runs the code one time then it check the condition so no matter what the condition is, it will print the output at least once.


   /* int i = 6;
    do
    {
       cout<<i<<endl;
       i++;
       i++;
       i++;
       i++;
       i++;
       i++; 
    } while (i<=60);*/
    int i = 1;
    int n = 6;
    for ( i = 1; i <=10; i++)
    {
        cout<<i*n<<endl;
    }
    
    
    return 0;
}