//Write a c program to stores the eaddress of pointer variable
#include<stdio.h>
void main(){
    int a, *p, **pp;
    a = 4;
    p = &a;
    pp = &p;
    printf("Address of a is %p\n",pp);
}