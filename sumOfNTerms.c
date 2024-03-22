#include<stdio.h>
void main() 
{
	int n,sum=0,i; 
	printf("Enter the Number :-");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("sum = %d",sum);
	printf("\n"); 
}
