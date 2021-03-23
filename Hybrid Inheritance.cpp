#include<iostream>
using namespace std;
class Student{
    protected:
        int rollno;
    public:
        void getRoll(int a){
            rollno=a;
        }
        void putRoll(void){
            cout <<"Roll No: "<< rollno<<endl;
        }
};
class Test : public Student{
    protected:
        float subject1, subject2;
    public:
        void getMarks(float x, float y){
            subject1=x;
            subject2=y;
        }
        void putMarks(void){
            cout<< "Marks gain: "<<endl <<"Subject1 =
"<<subject1<<endl<<"Subject2 = "<<subject2 <<endl;
        }
};
class Sport{
    protected:
        float score;
    public:
        void getScore(float s){
            score=s;
        }
        void putScore(void){
            cout<<"Sports score: "<<score<<endl;
        }
};
class Result : public Test, public Sport{
    float total;
    public:
        void display(void);
};
void Result:: display(void){
    total=subject1+subject2+score;
    putRoll();
    putMarks();
    putScore();
    cout<<"Total Score: "<<total<<endl;
}
int main(){
    Result stu;
    stu.getRoll(10);
    stu.getMarks(40,50);
    stu.getScore(60);
    stu.display();
    return 0;
}
