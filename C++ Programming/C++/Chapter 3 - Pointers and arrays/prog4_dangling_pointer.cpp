// dangling pointer is the pointer which points to the variable or the component which is already out of scope or its memory is already filled.

#include<iostream>
using namespace std;

int* getPtr(){
    int x=10;
    return &x;
}

int main(){
    // here ptr becomes dangling pointer
    int* ptr=getPtr();

    // this is undefined behaviour
    cout<<*ptr;
}