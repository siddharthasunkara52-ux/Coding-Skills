#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m,n;
    printf("Enter no.of rows and coloumns:");
    scanf("%d %d",&m,&n);
    int *p;
    p=(int *)malloc(m*n*sizeof(int));
    printf("Enter the elements:");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",(p+j+i*n));
        }
    }
    printf("Elements are:\n");
  
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        printf("%d ",*(p+j+i*n));
        }
        printf("\n");
    }
free(p);
}