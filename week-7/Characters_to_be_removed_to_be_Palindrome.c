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
        {
            int index = str[i] - 'a';
            f[index]++;
        }
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (f[i] % 2 == 1)
        {
            count++;
        }
    }

    int removals = (count > 0) ? (count - 1) : 0;
    printf("Minimum number of characters needed to remove to make it a palindrome: %d\n", removals);

    return 0;
}
