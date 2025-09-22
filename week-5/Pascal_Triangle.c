#include<stdio.h>

int main()
{
    int n,i,j,k,c=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    { 
        c=1;
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(j==0||i==j)
            {
             c=1;
            }
            else{
                c=c*(i-j+1)/j;

            }
            printf("%d ",c);

        }
        printf("\n");
    }
return 0;
}
