#include <stdio.h>
#include <string.h>

// Function to identify and print all prefixes of a given string
void printPrefixes(char *str)
{
    printf("Prefixes:\n");
    for (int i = 0; i <= strlen(str); i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
}

// Function to identify and print all suffixes of a given string
void printSuffixes(char *str)
{
    printf("Suffixes:\n");
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--)
    {
        for (int j = i; j < len; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
}

// Function to identify and print all substrings of a given string
void printSubstrings(char *str)
{
    printf("Substrings:\n");
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            for (int k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printPrefixes(str);
    printSuffixes(str);
    printSubstrings(str);

    return 0;
}
