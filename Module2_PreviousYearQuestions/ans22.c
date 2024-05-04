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
void main()
{
int x=1,n,i;
	float sum=0;
	printf("Enter limit =");
	scanf("%d",&n);
	
	printf("\nExpression : "); 	//Optional
	for(i=1;i<=n;i++){
		int p=1;
		printf("(%d / %d!) +",i,x);	//Optional
		sum=sum+i/fact(x);
		x=x+2;
	}
	printf("\nAnswer = %f",sum);
	
}

/*
Output :-
>>>gcc m2_ans22.c -o a.exe
>>>a.exe
Enter limit =3

Expression : (1 / 1!) +(2 / 3!) +(3 / 5!) +
Answer = 1.358333
*/
