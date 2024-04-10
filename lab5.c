#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if a given string is a single-line comment
bool isSingleLineComment(char *str)
{
    return (strlen(str) >= 2 && str[0] == '/' && str[1] == '/');
}

// Function to check if a given string is a multi-line comment start
bool isMultiLineCommentStart(char *str)
{
    return (strlen(str) >= 2 && str[0] == '/' && str[1] == '*');
}

// Function to check if a given string is a multi-line comment end
bool isMultiLineCommentEnd(char *str)
{
    return (strlen(str) >= 2 && str[0] == '*' && str[1] == '/');
}

int main()
{
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    if (isSingleLineComment(input))
    {
        printf("Input is a single-line comment.\n");
    }
    else if (isMultiLineCommentStart(input))
    {
        printf("Input is the start of a multi-line comment.\n");
    }
    else if (isMultiLineCommentEnd(input))
    {
        printf("Input is the end of a multi-line comment.\n");
    }
    else
    {
        printf("Input is not a comment.\n");
    }

    return 0;
}
