#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter your name:");
    scanf("%[^\n]",str);
    int l=0,r=strlen(str)-1;
    while(l<r)
    {
        char temp=str[l];
        str[l]=str[r];
        str[r]=temp;
        l++;
        r--;
    }
    printf("Reversed string is:%s",str);
    return 0;

}
