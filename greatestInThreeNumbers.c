#include <stdio.h>
void main() {
    int a,b,c,great;
    printf("Enter 3 Numbers :");
    scanf("%d %d %d",&a,&b,&c);
    
    if (a>b && a>c){
        great=a;
    }else if(b>c){
        great=b;
    }else{
        great=c;
    }
    
    printf("%d is greater",great);
}
