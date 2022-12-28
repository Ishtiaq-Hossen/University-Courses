/*

//-constant object----/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    const int x=10;
    //we cant change const int value ,we always need to initialize const variable value
    cout<<x<<endl;
    return 0;
}
*/


// ---- const ---------------/
#include<bits/stdc++.h>
using namespace std;
class MyClassDemo{
    public:
        void display1() const;
        void display2();//its a non constant function 

};
void MyClassDemo ::display1() const
{
    cout<<"I am a constant function\n"<<endl;
}
void MyClassDemo ::display2()
{
    cout<<"I am a non-constant function\n"<<endl;
}
int main()
{
    const MyClassDemo ob;
    ob.display1();
    MyClassDemo ob2;
    ob2.display2();
    
    return 0;
}
