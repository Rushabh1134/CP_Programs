#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, specialCharacters = 0;

    printf("Enter a string: ");
    gets(str);

    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        char lowercaseChar = tolower(str[i]);
        if (lowercaseChar >= 'a' && lowercaseChar <= 'z')
        {
            if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else if (isdigit(str[i]))
        {
            digits++;
        }
        else if (str[i] == ' ')
        {
            spaces++;
        }
        else
        {
            specialCharacters++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("White spaces = %d\n", spaces);
    printf("Special characters = %d\n", specialCharacters);

    return 0;
}
