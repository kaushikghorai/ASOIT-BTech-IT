#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fnum, *fodd, *feven;
    char num, innum;
    fnum = fopen("numbers.txt", "w+");
    feven = fopen("even.txt", "w+");
    fodd = fopen("odd.txt", "w+");
    printf("Enter 10 numbers (0-9):\n");
    for (int i = 0; i < 10; i++) {
        scanf("%c", &innum);
        putc(innum, fnum);
    }
    rewind(fnum);
    while ((num = getc(fnum)) != EOF) {
        if (num % 2 == 0) putc(num, feven);
        else putc(num, fodd);
    }
    printf("Numbers in even.txt:\n");
    rewind(feven);
    while ((num = getc(feven)) != EOF) {
        printf("%c ", num);
    }
    printf("\nNumbers in odd.txt:\n");
    rewind(fodd);
    while ((num = getc(fodd)) != EOF) {
        printf("%c ", num);
    }
    fclose(fnum);
    fclose(fodd);
    fclose(feven);

}