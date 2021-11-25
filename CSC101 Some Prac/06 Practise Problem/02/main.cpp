#include<iostream>
using namespace std;

int main()
{

    int pal;
    int working=0;
    int numdig=0;
    int counter;

    cout<<"Enter a positive number."<<endl;
    cin>>pal;
    working=pal;

    //determines how many digits are in a number (verified that this works)
    while (working>0)
    {
       working=(working-(working%10))/10;
       numdig++;
    }

    cout<<pal<<" has "<<numdig<<" digits."<<endl;

    //creates an array with counter elements and writes the digits of working
    //into the array (verified that this works)
    counter=numdig;
    working=pal;
    int palcheck[counter];
    for (;counter>=1; counter--)
    {
        palcheck[counter-1]=working%10;
        working=(working-(working%10))/10;
    }

    //displays the digits in the array (verified that this works)
    cout<<"The digits of your number are:"<<endl;
    do
    {
        cout<<palcheck[counter]<<"   ";
        counter+=1;
    }
    while (counter<numdig);
    cout<<endl;


    //compares the corresponding elements of the array to determine if they are
    //equal
    int counter2=numdig-1;
    counter=0;

    if (palcheck[counter]<palcheck[counter2])
    {
        counter++;
        counter2--;
    }

    else if (palcheck[counter]==palcheck[counter2])
    {
        cout<<pal<<" is a palindrome."<<endl;
    }

    //return (true);

    else cout<<pal<<" is not a palindrome."<<endl;


    return(0);
}
