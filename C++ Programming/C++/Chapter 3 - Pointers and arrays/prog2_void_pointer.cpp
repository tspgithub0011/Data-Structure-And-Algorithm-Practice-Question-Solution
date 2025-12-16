/*
reference : https://www.geeksforgeeks.org/cpp/cpp-pointers/
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int x=11;
    void* ptr = &x;
    // below line will give the error
    // cout<<"*ptr"<<*ptr;

    // to print the value inside the void pointer we need to type-cast the void pointer before dereferencing it.
    cout<<" value inside the void pointer = "<< *(static_cast<int*>(ptr))<<endl;;
    return 0;
}