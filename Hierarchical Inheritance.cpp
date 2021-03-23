#include <iostream>
using namespace std;
class Person {
    char gender[10];
    int age;
public:
    void getPerson()
    {
        cout << "Age: "; cin >> age;
        cout << "Gender: "; cin >> gender;
    }
    void dispPerson()
    {
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};
class Employee : public Person {
    float salary;
public:
    void getEmployee()
    {
        Person::getPerson();
        cout << "Salary: Rs."; cin >> salary;
    }
    void dispEmployee()
    {
        Person::dispPerson();
        cout << "Salary: Rs." << salary << endl;
    }
};
class Student : public Person {
    char level[20];
public:
    void getStudent()
    {
        Person::getPerson();
        cout << "Class: "; cin >> level;
    }
    void dispStudent()
    {
        Person::dispPerson();
        cout << "Level: " << level << endl;
    }
};
int main()
{
    Person per;
    Employee emp;
    Student stu;
    cout << "Student data" << endl;
    cout << "Enter data" << endl;
    stu.getStudent();
    cout << endl << "Displaying data" << endl;
    stu.dispStudent();
    cout << endl << "Staff Data" << endl;
    cout << "Enter data" << endl;
    emp.getEmployee();
    cout << endl << "Displaying data" << endl;
    emp.dispEmployee();
}
