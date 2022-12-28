#include<iostream>
#include<string.h>
using namespace std;
class Student 
{
    public:
        string name;//class variable
    Student(string name)
    {
        this->name=name;//1st name is class string name & 2nd name is local string name

    }
    void display()
    {
        cout<<name<<endl;
    }
};
int main()
{
    Student s1("Suparna");
    s1.display();
    return 0;
}