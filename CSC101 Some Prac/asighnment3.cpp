#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    char str[20] ;
    cin>>str;
    int len=strlen(str);

    cout << "The uppercase version of \"" << str << "\" is " << endl;

    for (int i=0; i<len; i++)
        putchar(toupper(str[i]));

    return 0;
}
