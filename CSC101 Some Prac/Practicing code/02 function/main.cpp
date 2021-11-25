#include <iostream>

using namespace std;
void volume(float ,float);
int main()
{
    float r,s ;
    volume(r,s);
    return 0;
}
void volume(float r,float s){
float v;
cout<<"Enter the radius and sphere :"<<endl;
cin>>r>>s;
v=r*s;
cout<<v;

}
