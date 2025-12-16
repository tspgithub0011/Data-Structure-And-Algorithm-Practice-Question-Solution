// refer : https://www.geeksforgeeks.org/cpp/lambda-expression-in-c/

// lambda expr. syntax =>
/*
    [capture-clause](parameters)->return_type{
        // function definition
    }
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// The lambda expression in the above program takes an integer x as input and returns the sum of x with itself. The result of res(5) prints 10, as the lambda doubles the value of 5

// int main(){
//     auto res = [](int x)->int{
//         return x+x;
//     };
//     cout<<res(5)<<endl;

//     vector<int> arr={10,5,-15,-20};
//     sort(arr.begin(),arr.end(),[](int a,int b){return abs(a)<abs(b);});
//     for(auto x:arr)
//         cout<<x<<" ";

//     int x;
//     cout<<"\nx = ";
//     cin>>x;
//     // here the return type is necessary.
//     auto f=[](int x)->double{
//         if(x>0) return x;
//         else return 0.5;
//     };

//     cout<<"f("<<x<<") = "<<f(x)<<endl;
//     return 0;
// }


void print(vector<int> &v){
    for(auto x:v)cout<<x;
    cout<<endl;
}

// capture clause implementation
int main(){
    vector<int> v1,v2;
    auto byRef = [&](int x){
        v1.push_back(x);
        v2.push_back(x);
    };

    auto byVal = [=](int x)mutable{
        v1.push_back(x);
        v2.push_back(x);
        cout<<"v1 = ";
        print(v1);
        cout<<"v2 = ";
        print(v2);
    };

    auto mixed = [v1,&v2](int x) mutable{
        v1.push_back(x);
        v2.push_back(x);
    };

    byRef(10);
    byVal(20);
    mixed(30);
    for(auto x:v1) cout<<x<<" ";
    cout<<endl;
    for(auto x:v2) cout<<x<<" ";

}