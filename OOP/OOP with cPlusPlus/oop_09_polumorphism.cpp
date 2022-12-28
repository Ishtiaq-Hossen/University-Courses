/*function overriding e pointer korte chaile 
only super class er pointer 
make kora jay */
#include<iostream>
using namespace std;
class Person//It's a super class
{
    public:
        virtual void display()//virtual keyword is used coz so everyone can access it
        {
            printf("I am a person\n");
        }
};
class Student : public Person
{
    //display
    public:
        void display()
        {
            printf("I am a student\n");
        }
};
class Teacher :public Person
{
    public:
        void display()
        {
            printf("I am a teacher\n");
        }
};

int main()
{
    Person *p;//we can only make pointer of super class
    Student s;
    Teacher t;
    p=&s;
    p->display();
    p=&t;
    p->display();
    
    return 0;
}