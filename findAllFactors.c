/* Factors of a number
       - All numbers in range from 0 to n are taken using a for loop, if any of them is divisible by n, they are printed */
#include<stdio.h>
void main()
{
  int n,i;
  printf("Enter the Number:-");
  scanf("%d",&n);
  printf("Factors of %d :",n);
  for(i=1;i<=n;i++){
      if(n%i==0){    
          printf("%d\t",i);
      }
  }
}
