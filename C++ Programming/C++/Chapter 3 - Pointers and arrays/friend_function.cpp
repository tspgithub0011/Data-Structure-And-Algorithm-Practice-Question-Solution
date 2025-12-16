#include <iostream>
using namespace std;
class no1;
class no2
{
    int n;

public:
    void getdata()
    {
        cout << "Enter the number: ";
        cin >> n;
    }

    void putdata()
    {
        cout << "Number 2 = " << n << endl;
    }

    friend int avg(no1, no2);
};

class no1
{
    int n;

public:
    void getdata()
    {
        cout << "Enter the number: ";
        cin >> n;
    }
    void putdata()
    {
        cout << "Number 1 = " << n << endl;
    }
    friend int avg(no1,no2);
};


int avg(no1 n1,no2 n2){
    return (n1.n+n2.n)/2;
}

int main(){
    no1 n1;
    no2 n2;
    n1.getdata();
    n2.getdata();
    n1.putdata();
    n2.putdata();
    cout << "Average = " << avg(n1,n2) << endl;
    return 0;
}