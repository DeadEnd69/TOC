#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// Function to check if a given string is a keyword
bool isKeyword(char *str)
{
    char keywords[][10] = {"if", "else", "while", "for", "int", "float", "char", "return", "break", "continue"};
    int numKeywords = sizeof(keywords) / sizeof(keywords[0]);

    for (int i = 0; i < numKeywords; i++)
    {
        if (strcmp(str, keywords[i]) == 0)
        {
            return true;
        }
    }

    return false;
}

// Function to check if a given string is a valid identifier
bool isValidIdentifier(char *str)
{
    int len = strlen(str);
    if (len == 0)
        return false;

    // Check if the first character is a letter or underscore
    if (!isalpha(str[0]) && str[0] != '_')
    {
        return false;
    }

    // Check each character after the first one
    for (int i = 1; i < len; i++)
    {
        if (!isalnum(str[i]) && str[i] != '_')
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);

    if (isKeyword(input))
    {
        printf("Input is a keyword.\n");
    }
    else if (isValidIdentifier(input))
    {
        printf("Input is a valid identifier.\n");
    }
    else
    {
        printf("Input is neither a keyword nor a valid identifier.\n");
    }

    return 0;
}
