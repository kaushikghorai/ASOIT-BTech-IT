//Write a c program to print the address of a variable using pointer.
#include<stdio.h>
void main(){
    int a, *p;
    a = 10;
    p = &a;
    printf("Address of a is %p",p);
}