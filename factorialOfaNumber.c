/* Factorial :- is the product of all positive integers less than or equal to that number
	Eg.   2! = 1*2
 	      5! = 1*2*3*4*5
	      10! = 1*2*3*4*5*6*7*8*9*10	*/
#include<stdio.h>
void main()
{
	int n,fact=1,i;
	/* n-> Number Entered by user
  	   fact -> Variable to store Factorila
           i -> Itrating Variable */
	printf("Enter the Number :-");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){	// Finding Factorial
		fact=fact*i;
	}
	printf("Factorial of %d = %d",n,fact);
	printf("\n");
}

