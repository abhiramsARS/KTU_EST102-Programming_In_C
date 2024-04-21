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
    
    printf("Enter Element to Search :");
    scanf("%d",&x);
    
    for(i=0;i<l;i++){
        if (a[i]==x){
            flag=1;
            break;
            }
    }
    
    if (flag){
        printf("Element Found at %d",i+1);
    }else{
        printf("Element Not Found");
    }
}
