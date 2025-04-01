//Write a C program to add the two values using pointers
#include<stdio.h>
void main(){
    int a, b, *pa, *pb, sum;
    a = 10;
    b = 5;
    pa = &a;
    pb = &b;
    sum = *pa + *pb;
    printf("The sum is %d\n",sum);
}