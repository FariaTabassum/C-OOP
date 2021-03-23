// break statement
#include<iostream>
using namespace std;
int main()
{
    int i ;
    for ( i=1;i<=100;i++ )
    {
        if(i==20)
        {
            break;
        }
        cout << "break statement :"<< i << endl;
    }
  cout<<"----------------------------"<<endl;

// continue statement


    for ( i=1;i<=30;i++ )
    {
        if(i==20)
        {
            continue;
        }
        cout << "continue statement: "<< i << endl;
    }
    return 0;
}
