// refer : https://www.geeksforgeeks.org/cpp/references-in-cpp/
#include<iostream>
#include<vector>
#include<algorithm>
#include<chrono>
using namespace std;
using namespace std::chrono;

int main(){
    auto start = high_resolution_clock::now();

    int a=10;
    cout<<"a before change = "<<a<<endl;

    int& b=a;
    cout<<"b as another name of a = "<<b<<endl;
    b=22;
    cout<<"changed b = "<<b<<endl;
    cout<<"updated a due to change in b = "<<a<<endl;

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end-start);
    cout<<"execution time = "<<duration.count()<<" ms."<<endl;
}