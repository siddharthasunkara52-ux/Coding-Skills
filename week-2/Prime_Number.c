#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter an number:");
    scanf("%d",&n);
    int q=(int)sqrt(n);
    int f=0;

    if(n!=2 && n%2==0)
    {
        f=1;
    }
   else if(n!=3 && n%3==0)
    {
        f=1;
    }
    else{
        for(int i=5;i<=q;i+=6)
        {
            if(n%i==0 || n%(i+2)==0)
            {
                f=1;
            }
        }
    }
    if(f==1)
    {
        printf("%d is not an prime number",n);
    }
    else{
        printf("%d is an prime number",n);
    }
    return 0;
}
