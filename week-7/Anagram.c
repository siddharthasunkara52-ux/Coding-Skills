#include <stdio.h>

int main()
{
    char str1[50], str2[50];
    printf("Enter string1: ");
    scanf("%[^\n]", str1);
    printf("Enter string2: ");
    scanf(" %[^\n]", str2); 

    int f[26] = {0};


    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
            str1[i] += 32;  

        if (str1[i] >= 'a' && str1[i] <= 'z')
            f[str1[i] - 'a']++;
    }

    
    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] >= 'A' && str2[i] <= 'Z')
            str2[i] += 32;  

        if (str2[i] >= 'a' && str2[i] <= 'z')
            f[str2[i] - 'a']--;
    }

    
    for (int i = 0; i < 26; i++)
    {
        if (f[i] != 0)
        {
            printf("No, the strings are not anagrams\n");
            return 0;
        }
    }

    printf("Yes, the strings are anagrams\n");
    return 0;
}
