#include<stdio.h>
#include <stdlib.h>
int main(){
    char *x;
    x = (char*)malloc(sizeof(char));// from heap|1b| |0-0000000|
    //1111111
    //
    //4
    *x=10;
    printf("%d \n",*x);
    printf("%p \n",x);
    printf("%p \n",&x);
    return 0;
}