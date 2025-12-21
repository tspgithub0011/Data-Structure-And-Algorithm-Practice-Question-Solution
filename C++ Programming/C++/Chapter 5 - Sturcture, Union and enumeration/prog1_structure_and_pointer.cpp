// reference : https://www.geeksforgeeks.org/cpp/structures-in-cpp/
// https://www.geeksforgeeks.org/cpp/cpp-unions/
// https://www.geeksforgeeks.org/cpp/enumeration-in-cpp/

#include<iostream>
using namespace std;

struct demo
{
    int a,b;
    // this can have constructor, destructor, private and public and private components too..
    void getData(int x,int y){
        a=x;
        b=y;
    }
};

int main(){
    demo d;
    demo* ptr=&d;
    ptr->getData(2,3);
    cout<<"a = "<<ptr->a<<endl;
    cout<<"b = "<<ptr->b<<endl;
}