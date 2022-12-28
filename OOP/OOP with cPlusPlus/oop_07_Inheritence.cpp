#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        void display1()
        {
            cout<<"Name : "<<name<<"\n";
            cout<<"Age : "<<age<<endl;
        }
};
class Student : public Person// student class is inheriting person class
{
    //name,age,display
    public:
        int id;
        void display2()
        {
            cout<<"ID : "<<id<<endl;
            // cout<<"Name : "<<name<<endl;
            // cout<<"Age : "<<age<<endl;
            display1();

        }
};
int main()
{
    Student s1;
    s1.id=101;
    s1.name="Ishtiaq";
    s1.age=27;
    s1.display2();
    return 0;

}