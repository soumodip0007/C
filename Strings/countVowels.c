#include <stdio.h>

int countVowels(char str[]);

int main()
{
    printf("Enter a word or sentence to count vowels : \n");
    char str[100];
    gets(str);
    printf("Vowels are : %d", countVowels(str));
    return 0;
}

int countVowels(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || 
            str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    return count;
}