#include <iostream>
using namespace std;
class Student{
    protected:
    int rollno;
    public:
    void getnum(int a){
     rollno = a;
    }
    void putnum(){
     cout << "Roll Number Is: "<< rollno << "\n";
    }
};
class Marks : public Student{
    protected:
    int sub1;
    int sub2;
    public:
    void getmarks(int x,int y){
        sub1 = x;
        sub2 = y;
    }
    void putmarks(void){
        cout << "Subject 1: " << sub1 << "\n";
        cout << "Subject 2: " << sub2 << "\n";
    }
};
class Result : public Marks{
    protected:
    float tot;
    public:
    void disp(void){
        tot = sub1+sub2;
        putnum();
        putmarks();
        cout << "Total: "<< tot;
    }
};
int main(){
    Result res;
    res.getnum(5);
    res.getmarks(70,60);
    res.disp();
    return 0;
}
