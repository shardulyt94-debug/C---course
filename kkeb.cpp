#include <iostream>
using namespace std;

int main(){

    // chal mein samjhata hun tujhe 
    // Code for writing '6 ka multiplication table without majdoori'
    
    // dekh ab meri purani wali technique majdoori thi so ab iss baar mein do numbers lunga ek fixed rahega aur ek change hoga ( increment hoga )
    // sun ab loop likhenge i k liye taki i incremnet ho har baar jb tk condition satisfy na ho tb tk aur jb print krne ki bari ayegi tb beech me n ko ghusa denge multiplication krne k liye 
    int i = 1;
    int n = 7;
    for ( i = 1; i <=7; i++) // <-- iska mtlb i = 1 se start kro and jb tk result mein 60 na aa jaye tb tk kaam chalu rehne do aur har baar loop chalate samay i ki value mein +1 krte jao 
    {
        cout<<i*n<<endl;
    }

    return 0;
}