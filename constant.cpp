//Constants are unchangeable; when a constant variable is initialized in a program, its value cannot be changed afterwards.
#include<iostream>
using namespace std;

int main()
{
    //int a=45;
    //cout<<"The value of a was: "<<a<<endl;
    //a=20;
    //cout<<"The value of a is: "<<a<<endl;
    //constant in c++
    const int a=3;
    cout<<"The value of a was: "<<a<<endl;
    a = 45; // You will get an error because a is a constant
    cout<<"The value of a is: "<<a<<endl;
    return 0;
}

