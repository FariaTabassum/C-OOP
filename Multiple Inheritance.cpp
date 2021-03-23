#include <iostream>
using namespace std;
class Square
{
    protected:
    int l;
    public:
    void setvalues (int x){
     l=x;
    }
};
class Show{
    public:
    void show(int i){
        cout << "The area of the square is: " << i << endl;
    }
};
class Area: public Square, public Show{
    public:
    int area(){
     return (l*l);
    }
};
int main (){
    Area a;
    a.setvalues (3);
    a.show(a.area());
    return 0;
}
