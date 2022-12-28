//----Encapsulation-----
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class Student 
{
    private:
        string name;
    public:
        void setName(string);
        string getName();
        

};
void Student::setName(string x)
{
    name=x;
}
string Student::getName(){
    return name;
}
int main()
{
    Student s1;
    s1.setName("Suparna");
    cout<<"Name is: "<<s1.getName()<<"\n";
    getch();
}