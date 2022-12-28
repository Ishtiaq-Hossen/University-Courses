
//----------oop---------/

#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
    public:
        int id;
        double gpa;
        void display()
        {
            cout<<id<<" "<<gpa<<"\n";
        }
        /*
        void setValue(int x,double y)//parameterize function
        {
            
            id=x;
            gpa=y;
        }
        */
       Student(int x, double y) //constractor
       {
            // this is a parameterize constractor
            id=x;
            gpa=y;
       }
       Student()
       {
            //this is a default contractor
            printf("Default contractor\n");
       }
};
int main()
{
    Student Alim(101,4.55),Suparna(105,5.00);
    Student Hashem;
    
    
    // Alim.setValue(101,4.55);
    // Suparna.setValue(105,5.00);
    
    /*
    Alim.id=101;
    Alim.gpa=5.00;
    Suparna.id=102;
    Suparna.gpa=4.98;
    */
    /*
    cout<<"Alim id is here \t"<<Alim.id<<endl;
    cout<<"Alim gpa is here \t"<<Alim.gpa<<endl;
    cout<<"Suparna id is here \t"<<Suparna.id<<endl;
    cout<<"Suparna gpa is here \t"<<Suparna.gpa<<endl;
    */
    Alim.display();
    Suparna.display();
    getch();
}





/*
constractor: we can use it as class name 
             it will help to inialize more efficiently .
there is 2 types of : (i) Parameterize constractor
                      (ii) Defacult constractor


for more info see Anisul Islam C++ playlist video no 69,70,71
*/