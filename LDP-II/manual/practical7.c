#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fpin, *fpodd, *fpeven;
    int num;
    fpin = fopen("numbers.txt","r");
    fpeven = fopen("even.txt","w");
    fpodd = fopen("odd.txt","w");
    while(fscanf(fpin, "%d", &num) != EOF){
        if(num%2==0) fprintf(fpeven,"%d\n",num);
        else fprintf(fpodd,"%d",num);
    }
    fclose(fpin);
    fclose(fpodd);
    fclose(fpeven);

}