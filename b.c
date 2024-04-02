#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to simulate DFA for strings ending with 01
bool acceptEndsWith01(char *str)
{
    int state = 0;
    int len = strlen(str);
    if (len < 2)
        return false; // Check if the string has at least 2 characters
    if (str[len - 2] == '0' && str[len - 1] == '1')
        return true;
    return false;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (acceptEndsWith01(str))
    {
        printf("Accepted: String ends with 01.\n");
    }
    else
    {
        printf("Rejected: String does not end with 01.\n");
    }

    return 0;
}
