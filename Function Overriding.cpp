#include <iostream>
using namespace std;
class Vehicle
{
   private:
      int speed;
   public:
   void running(){
        cout<<"Vehicle runs"<<endl;
   }
};
class Bike: public Vehicle{
    public:
    void running(){
        cout<<"Bike runs"<<endl;
    }
};
int main()
{
    Bike bike;
    bike.running();
    return 0;
}
