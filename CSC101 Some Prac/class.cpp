#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
   public:
       int id;
       float gpa;
       void display()
       {
           cout<<id<<"  "<<gpa<<endl;
       }
       /*void setvalue(int x,float y)
       {
           id=x;
           gpa=y;

       }*/
       Student(int x, float y)
       {
           id=x;
           gpa=y;
       }
       Student()
       {
           cout<<"Default constructor it is hurrah"<<endl;

       }

};
int main()
{
    Student raki;

    Student arifa(1001,3.25);

    //arifa.setvalue(1001,3.25);
    arifa.display();
    Student nadim(1002,3.65);
    //nadim.setvalue(1002,3.75);
    nadim.display();
    getch();

}

