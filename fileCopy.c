#include<stdio.h>

void main()
{
	FILE *file1, *file2;
	char c;
	file1 = fopen("test.txt","r");
	file2 = fopen("copy.txt","w");
	
	while(feof(file1)==0){
		c=fgetc(file1);
		fputc(c,file2);
	}
	fclose(file1);
	fclose(file2);
	
}
