#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int i = 0, j = strlen(str) - 1;
    while(i < j) {
        while(i < j && !isVowel(str[i])) i++;
        while(i < j && !isVowel(str[j])) j--;

        if(i < j) {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;
            j--;
        }
    }

    printf("String after swapping vowels: %s\n", str);
    return 0;
}
