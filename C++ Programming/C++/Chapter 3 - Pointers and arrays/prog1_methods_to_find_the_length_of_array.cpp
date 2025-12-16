/*
reference :
https://www.geeksforgeeks.org/cpp/cpp-arrays/
https://www.geeksforgeeks.org/cpp/how-to-find-the-length-of-an-array-in-cpp/
https://www.geeksforgeeks.org/cpp/cpp-pointer-arithmetic/
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int arr[5] = {5,2,3,4,5};
    cout<<"using sizeof() = "<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<"using pointer arithmetic = "<< *(&arr + 1) - arr<<endl;
    cout<<"using since c++ 17 size() = "<<size(arr);
}