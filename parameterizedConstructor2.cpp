// Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those 2 points

// Use these examples to check your code:
// Distance between (1, 1) and (1, 1) is 0
// Distance between (0, 1) and (0, 6) is 5
// Distance between (1, 0) and (70, 0) is 69
#include<iostream>
#include<cmath>
using namespace std;

class point{
    int x, y;
    friend class compute;
    public:
        point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }


};
class compute
{
    public:
    double  distance (point p1, point p2)
    {
        double res=sqrt(pow(p1.x-p2.x,2)+
                        pow(p1.y-p2.y, 2));
        return res;
    }

};

int main(){
    point p(1, 0);
    p.displayPoint();

    point q(70, 0);
    q.displayPoint();

    compute cp;
    double result = cp.distance (p,q);
    cout<<result<<endl;
    return 0;
}
