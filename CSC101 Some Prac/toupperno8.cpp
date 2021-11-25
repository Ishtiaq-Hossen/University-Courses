#include<iostream>
#include<cstring>
using namespace std;
char parameter(char string1[]);
int main()
{
    char string2[100];
    parameter(string2);
    return 0;
}
char parameter(char string1[100]){
    cin>>string1;
    int len=strlen(string1);
    for(int i=0;i<len;i++){
    string1[i]=toupper(string1[i]);
    }
    cout<<string1;

}
