#include<stdio.h>
void main()
{
  int n,i;
  printf("Enter the Number:-");
  scanf("%d",&n);
  printf("Factorial of %d :",n);
  for(i=1;i<=n;i++){
      if(n%i==0){
          printf("%d\t",i);
      }
  }
}
