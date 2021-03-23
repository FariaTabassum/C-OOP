#include <iostream>
using namespace std;
class operatorEx
{
   private:
      int num;
   public:
       operatorEx(): num(10){
       }
       void operator --()
       {
          num = num-1;
       }
       void print() {
           cout<<"num is: "<<num;
       }
};
int main()
{
    operatorEx obj;
    --obj;  // calling of a function "void operator --()"
    obj.print();
    return 0;
}
