#include<bits/stdc++.h>
using namespace std;
class MobileUser
{
    public:
        void call()
        {
            cout<<"Hello !\n";
        }
        virtual void sendMessage()=0;
};
class Fahim: public MobileUser
{
    public:
        void sendMessage()
        {
           cout<<"Hi, This is Fahim\n";
        }
};
class Karim: public MobileUser
{
    public:
        void sendMessage()
        {
           cout<<"Hi, This is Karim\n";
        }
};
int main()
{
    MobileUser *m;
    Fahim r;
    Karim k;
    m=&r;
    m->call();
    m->sendMessage();
    m=&k;
    m->call();
    m->sendMessage();
    return 0;
}