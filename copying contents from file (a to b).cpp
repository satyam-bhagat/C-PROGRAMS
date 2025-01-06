#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("source_file.txt","r");//To view the compiled files, create a folder in the same location
	if(fp1==NULL)
	{
		printf("cannot open file\n");
		exit(1);
	}
	fp2=fopen("destination_file.txt","a");
	if(fp2==NULL)
	{
		printf("cannot open file\n");
		exit(1);
	}
	while((ch=getc(fp1))!=EOF)
	{
		putc(ch,fp2);
	}
	printf("contents copied successfully\n");
	return 0;
}
