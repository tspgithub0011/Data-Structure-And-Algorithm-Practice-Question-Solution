// refer : https://www.geeksforgeeks.org/cpp/function-pointer-in-cpp/

#include<iostream>
using namespace std;

int multiply(int a,int b){
    return a*b;
}

int main(){
    int (*func)(int,int);
    func = multiply;
    int x = func(2,2);
    cout<<"Product = "<<x<<endl;
    return 0;
}