#include <iostream>

using namespace std;

class employee
{
    private:
        int a, b, c;

    public:
        int d, e;

    void setdata(int a1, int b1, int c1); //Declaration

    void getdata(int d, int e){
        cout<<"The value of a is :"<<a<<endl;
        cout<<"The value of b is :"<<b<<endl;
        cout<<"The value of c is :"<<c<<endl;
        cout<<"The value of d is :"<<d<<endl;
        cout<<"The value of e is :"<<e<<endl;
    }
};

    void employee :: setdata(int a1, int b1, int c1){
        a = a1;
        b = b1;
        c = c1;
    }

int main(){
    employee shardul;

    shardul.d = 69;
    shardul.e = 96;

    shardul.setdata(7,8,9);
    shardul.getdata(shardul.d, shardul.e);
    return 0;
}