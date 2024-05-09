#include<stdio.h>
void main()
{
	FILE *file;
	file = fopen("test.txt","r");
	
	while(feof(file)==0){
		printf("%c",fgetc(file));
	}
	fclose(file);
}
