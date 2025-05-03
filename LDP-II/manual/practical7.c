#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
    FILE *fnum, *fodd, *feven;
    int num, innum, size;

    fnum = fopen("numbers.txt", "w");

    printf("Enter size of file: ");
    scanf("%d",&size);

    printf("Enter 10 numbers (0-9):\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &innum);
        fputc(innum, fnum);
    }

    fclose(fnum);

    fnum = fopen("numbers.txt", "r");
    feven = fopen("even.txt", "w");
    fodd = fopen("odd.txt", "w");

    while ((num = fgetc(fnum)) != EOF) {
        if (num % 2 == 0) fputc(num, feven);
        else fputc(num, fodd);
    }

    fclose(fnum);
    fclose(feven);
    fclose(fodd);

    fnum = fopen("numbers.txt", "r");
    feven = fopen("even.txt", "r");
    fodd = fopen("odd.txt", "r");

    printf("Numbers in numbers.txt:\n");
    while ((num = fgetc(fnum)) != EOF) {
        printf("%d ", num);
    }

    printf("\nNumbers in even.txt:\n");
    while ((num = fgetc(feven)) != EOF) {
        printf("%d ", num);
    }

    printf("\nNumbers in odd.txt:\n");
    while ((num = fgetc(fodd)) != EOF) {
        printf("%d ", num);
    }

    fclose(fnum);
    fclose(fodd);
    fclose(feven);

}