#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Enter the age: ";
    cin>>x;

    if(x>=65){
        cout<<"Late adulthood";
    }
    else if(x>=40){
        cout<<"Mature adulthood";
    }
    else if(x>=20){
        cout<<"Young adulthood";
    }
    else if(x>=12){
        cout<<"Adolescence";
    }
    else if(x>=3){
        cout<<"Childhood";
    }
    else{
        cout<<"Infancy";
    }




    return 0;
}
