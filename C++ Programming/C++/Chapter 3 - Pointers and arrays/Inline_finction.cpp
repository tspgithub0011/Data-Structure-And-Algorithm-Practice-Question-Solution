#include<iostream>
using namespace std;
class Calc{
    int n1,n2;
    public:
        void getdata(){
            cout<<"Enter first number: ";
            cin>>n1;
            cout<<"Enter second number = ";
            cin>>n2;
        }

        inline void putdata(){
            cout<<"First number = "<<n1<<endl;
            cout<<"Second Number = "<<n2<<endl;
        }
};

int main(){
    Calc obj;
    obj.getdata();
    obj.putdata();
    return 0;
}