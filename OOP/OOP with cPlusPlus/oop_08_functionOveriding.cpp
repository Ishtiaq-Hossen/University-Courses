#include<iostream>
using namespace std;
class Person
{
    public:
        void display()
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
    Person p;
    p.display();
    Student s;
    s.display();
    Teacher t;
    t.display();
    return 0;
}


/*
Difference between function overriding & overloading
Overloading
    #In function overloading 
    there will be no limitation in parameter at functions
    #function overloading will happen in one class
    #For overloading there no need of inheritance 
    #In overloading a function won't hide any function 
    /One method does not hide another 

Overriding
    #Parameter must be different 
    #It occurs between two classes 
    sub class and a super class
    #Inheritence is involved 
    #Return type must be same
    #Child method hides parent another //method=function

For more info see 
https://www.youtube.com/watch?v=3brqrZ5g2j4&ab_channel=AnisulIslam

*/