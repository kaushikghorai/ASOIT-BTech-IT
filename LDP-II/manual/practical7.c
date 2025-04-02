#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fnum, *fodd, *feven;
    int num;
    fnum = fopen("numbers.txt","w");
    feven = fopen("even.txt","w");
    fodd = fopen("odd.txt","w");
    int innum;
    for(int i=0;i<10;i++){
        scanf("%d", &innum);
        fprintf(fnum, "%d\n", innum);
    }
    while(fscanf(fnum, "%d", &num) != EOF){
        if(num%2==0) fprintf(feven,"%d\n",num);
        else fprintf(fodd,"%d",num);
    }
    fclose(fnum);
    fclose(fodd);
    fclose(feven);

}