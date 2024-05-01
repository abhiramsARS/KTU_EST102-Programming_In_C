/*    AMSTRONG NUMBER :-Sum of its own digits each raised to the power of the number of digits
            Eg.     153   = 1^3 + 5^3 + 3^3 [Amstrong Number]  
                    1634  = 1^4 + 6^4 + 3^4 + 4^4 [Amstrong Number] */

#include <stdio.h>    // Header File
void main()    //Main Function
{
    int n,org,c,t=1,sum,i;    // Declaring Variables
            /* n -> Number Entered by user 
               org -> Variable to store value of n (this variable will be constant through out the execution)
               c -> No. of ditis in number n
               t -> temporary Variable
               sum -> Sum of of digits in number n raised to number of digits in n
               i -> Itrating Variable*/
    
    printf("Enter a number:-"); // Recieving Value of n
    scanf("%d",&n);
    org=n;
    while(n>0){    //Counting Number of Digits in number
        c++;
        n=n/10;
    }
    n=org;
    
    while(n>0){
        int p=1;
        t=n%10;
        for(i=0;i<c;i++){    // Finding t to the power of c (t**c or t^c)
            p=p*t;
        }
        sum=sum+p;
        n=n/10;
    }
    if(sum==org){    //Checking for amstrong
        printf("Amstrong Number");
    }else{
        printf("Not an Amstrong Number");
    }
}
