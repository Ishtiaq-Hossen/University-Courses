//creating separating files for class;
#include<bits/stdc++.h>
using namespace std;

/* 
// ---constractor showcase----
class MyFirstClass
{
    public:
        MyFirstClass();
        void display();
};
MyFirstClass::MyFirstClass()
{
    cout<<"Inside the constractor"<<endl;
}
void MyFirstClass::display()
{
    printf("Inside the display function.\n");
}
*/


//-----destructor calling----/
class MyFirstClass
{
    public:
        MyFirstClass();
        ~MyFirstClass();//destruction initialization
        void display();
};
MyFirstClass::MyFirstClass()//constractor
{
    cout<<"Constractor is called"<<endl;
}
MyFirstClass::~MyFirstClass()// destructor
{
    cout<<"Destructor is called"<<endl;
}
void MyFirstClass::display()
{
    printf("Display is called\n");
}

int main()
{
    MyFirstClass obl;
    MyFirstClass *p=&obl;
    p->display();// by using selection operator
    //obl.display();


    /* after running the pogram we can understand 
    destructor will call & print in the end of the pogram
    */
    return 0;

}