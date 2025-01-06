#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *fp1, *fp;
    char ch;

    fp1 = fopen("source.txt", "r");
    if (fp1 == NULL) {
        perror("Error opening source file");
        exit(1);
    }

    fp = fopen("destination.txt", "a");
    if (fp == NULL) {
        perror("Error opening destination file");
        fclose(fp1);
        exit(2);
    }

    while ((ch = getc(fp1)) != EOF) {
        putc(ch, fp);
    }
    fclose(fp1);
    fclose(fp);

    printf("Contents of source.txt appended to destination.txt successfully.\n");
    return 0;
}

