#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;
    do {
        printf("Enter an alphabet: ");
        scanf(" %c", &c);
    }
    while (!isalpha(c));
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
