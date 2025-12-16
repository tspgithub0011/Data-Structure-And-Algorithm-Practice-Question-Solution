// refer : https://www.geeksforgeeks.org/cpp/function-pointer-in-cpp/

// #include<iostream>
// using namespace std;

// int multiply(int a,int b){
//     return a*b;
// }

// int main(){
//     int (*func)(int,int);
//     func = multiply;
//     int x = func(2,2);
//     cout<<"Product = "<<x<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;

const int a = 10;
const int b = 20;

int multiply(){
    return a*b;
}
void print(int (*func)()){
    cout<<"the value of product is = "<<func()<<endl;
}

int main(){
    print(multiply);
    return 0;
}