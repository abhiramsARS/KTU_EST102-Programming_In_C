// Online C compiler to run C program online
#include <stdio.h>
void main() 
{
    int m,n,a[20][20],b[20][20],i,j;
    printf("Enter Row and Column -");
    scanf("%d%d",&m,&n);
    printf("Martix-A\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter Element at row-%d & column-%d :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Martix-B\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter Element at row-%d & column-%d :",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    
    printf("Martix-A+B:-\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d  ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}
