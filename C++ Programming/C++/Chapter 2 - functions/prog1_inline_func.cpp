// measure the execution time of code
// refer : https://www.geeksforgeeks.org/cpp/inline-functions-cpp/

#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;

inline void inlineFunc(){
    for (int i = 0; i < 5; i++)
    {
        printf("Hello %d\n", i);
    }
}

int main(){
    auto start=high_resolution_clock::now();
    long long sum = 0;
    inlineFunc();
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Hello %d\n", i);
    // }
    auto end=high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end-start);
    cout<<"execution time without inline = "<<duration.count()<<" ms.";
    return 0;
}