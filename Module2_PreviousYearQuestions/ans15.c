#include<stdio.h>
/*======================================================================================================================*/
float fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++){
		f=f*i;
	}
	return f;
}
/*======================================================================================================================*/
float power(int a,int b)
{
	int i,p=1;
	for(i=1;i<=b;i++){
		p=p*a;
	}
	return p;
}
/*======================================================================================================================*/
void main()
{
	int x,n,i;
	float sum=0;
	printf("\nEnter value of x =");
	scanf("%d",&x);
	printf("Enter limit =");
	scanf("%d",&n);
	
	for(i=3;i<=n;i=i+2){
		int p=1;
		sum=sum+(power(x,i)/fact(i));
	}
	printf("\nAnswer = %f",x-sum);
	
}


/*
Output:-

>>> gcc m2_ans15.c -o a.exe
>>> a.exe

Enter value of x =1
Enter limit =5

Answer = 0.825000

*/
