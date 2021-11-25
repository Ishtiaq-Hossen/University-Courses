#include<iostream>
using namespace std;
bool sub_String_Check(string str1,string str2)
{
   // cout<<str1<<endl<<str2<<endl;
    int c=0,d=0;
    for(int i=0;i<str1.length();i++)
    {
        if(str2[0]==str1[i])
        {
            c=i;
           for(int j=0;j<str2.length();j++)
           {
               if(str2[j]==str1[c])
               {
                 d++;
               }
               else{
                    d=0;
                break;
               }
               c++;
           }
        }
    }
    if(d==str2.length())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);

    bool result=sub_String_Check(str1,str2);
    cout<<result<<endl;
    return 0;
}
