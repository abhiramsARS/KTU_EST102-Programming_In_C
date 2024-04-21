#include <stdio.h>
void main() 
{
    int l,a[20],i,x,flag=0;
    printf("Enter length of array -");
    scanf("%d",&l);
    for(i=0;i<l;i++){
        printf("Enter Element :");
            scanf("%d",&a[i]);
    }
    
    x=a[0];
    
    for(i=1;i<l;i++){
        if (a[i]>x){
            x=a[i];
            }
    }
    
    printf("Largest Number in Array =%d",x);
}
