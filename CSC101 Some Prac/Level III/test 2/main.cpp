#include <iostream>

using namespace std;

int main()
{

    int i,y;
    float x[10],sum;
    cout<< "Enter the number= ";
    cin>>y;

    for(i=0;i<y;i=i+1){
        cout<<"["<<i+1<<"]= ";
        cin>>x;
    }

    sum=x/y;
cout<<sum;





    return 0;
}
