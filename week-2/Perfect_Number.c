#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter an number:");
    scanf("%d",&n);
    int q=(int)sqrt(n);
    int sum=1;

    for(int i=2;i<=q;i++)
    {
        if(n%i==0)
        {
            sum=sum+i+n/i;
        }
    }
if(sum==n)
{
    printf("%d is an perfect number",n);
}
else{
    printf("%d is not an perfect number",n);
}
  return 0;
}
