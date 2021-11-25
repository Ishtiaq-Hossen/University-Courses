#include <iostream>

using namespace std;

int main()
{
    int x,y,m;
    cout<<"First Value ";
    cin>>x;
    cout<<"Last Value  ";
    cin>>y;

    for(m=x;m<y;m=m+1){
        cout<< m <<",";
    }
        cout<<m;



    return 0;
}
