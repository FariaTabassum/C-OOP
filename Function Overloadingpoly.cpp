#include<iostream>
using namespace std;
class Polygon
{
    public:
    void area(int x)
    {
        cout << "area of cube " << x*x << endl;
    }
    void area(int x, int y)
    {
        cout << "area of ractangle " << x*y<< endl;
    }
};
int main() {
    Polygon obj;
    obj.area(4);
    obj.area(3,4);
    return 0;
}
