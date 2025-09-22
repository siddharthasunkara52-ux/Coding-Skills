#include <stdio.h>

int main()
{
    char str[50];
    printf("Enter your string: ");
    scanf("%[^\n]", str);

    int f[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;  

        if (str[i] >= 'a' && str[i] <= 'z')
            f[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (f[i] == 0)
        {
            printf("The given string is not a pangram\n");
            return 0;
        }
    }

    printf("The given string is a pangram\n");
    return 0;
}
