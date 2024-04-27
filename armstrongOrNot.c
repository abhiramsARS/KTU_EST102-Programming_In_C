#include <stdio.h>
void main() 
{
    int n,org,c,t=1,sum,i;
    printf("Enter a number:-");
    scanf("%d",&n);
    org=n;
    while(n>0){           //Counting Number of Digitsin number
        c++;
        n=n/10;
    }
    n=org;
    
    while(n>0){
        int p=1;
        t=n%10;
        for(i=0;i<c;i++){  // Finding t to the power of c (t**c or t^c)
            p=p*t;
        }
        sum=sum+p;
        n=n/10;
    }
    if(sum==org){            //Checking for amstrong
        printf("Amstrong Number");
    }else{
        printf("Not an Amstrong Number");
    }
}
