#include <iostream>

using namespace std;

int main(){

    // user se input lenge fir usko table denge
    int i;
    int n;
    int x;

    cout<<"konse number ka table chahiye woh likh"<<endl;
    cin>>i;

    cout<<"kidhar tk chahiye woh likh"<<endl;
    cin>>n;

    cout<<"firse kidhar tk chahiye woh likh"<<endl;
    cin>>x;

    for ( n = 1; n <= x; n++)
    {
        cout<<i*n<<endl;
    }
    

    return 0;
}