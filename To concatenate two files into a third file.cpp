#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    FILE *fp1, *fp2, *fp3;

    fp1 = fopen("file1.txt", "r");
    if (fp1 == NULL) {
        perror("Error opening file1.txt");//To view the compiled files, create a folder in the same location
        exit(1);
    }

    fp2 = fopen("file2.txt", "r");
    if (fp2 == NULL) {
        perror("Error opening file2.txt");
        fclose(fp1);
        exit(2);
    }

    fp3 = fopen("file3.txt", "w");
    if (fp3 == NULL) {
        perror("Error opening file3.txt");
        fclose(fp1);
        fclose(fp2);
        exit(3);
    }
    
    while ((ch = getc(fp1)) != EOF) {
        putc(ch, fp3);
    }
    
    while ((ch = getc(fp2)) != EOF) {
        putc(ch, fp3);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("Contents of file1.txt and file2.txt merged into file3.txt successfully.\n");
    return 0;
}

