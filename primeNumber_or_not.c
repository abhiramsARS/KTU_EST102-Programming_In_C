#include<stdio.h>
void main()
{
	int n,fact=1,i,flag=0;
	printf("Enter the Number :-");
	scanf("%d",&n);
	
	for(i=2;i<n;i++){
		if(n%i==0){
		    flag=1;
		    break;
		}
	}
	if(flag){
	    printf("Not a Prime Number");
	}else{
	    printf("Prime Number");
	}
}
