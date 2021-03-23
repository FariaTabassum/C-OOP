#include <iostream>
using namespace std;

class Polygon{
    protected:
    int width,hight;
    public:
    void set_values (int w,int h){
     width=w;
     hight=h;
    }
};
class Triangle: public Polygon{
    public:
    int area(){
     return ((width*hight)*1/2);
    }
};
int main (){
    Triangle tri;
    tri.set_values (3,4);
    cout << "The area of triangle is:  " << tri.area() << endl;
    return 0;
}

