#include <stdio.h>
#include <stdbool.h>

// Function to simulate NFA for strings with 01 as substring
bool acceptSubstring01(char *str)
{
    int state = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (state == 0 && str[i] == '0')
            state = 1;
        else if (state == 1 && str[i] == '1')
            return true;
        else if (state == 1 && str[i] == '0')
            state = 1;
        else
            state = 0;
    }
    return false;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (acceptSubstring01(str))
    {
        printf("Accepted: String contains 01 as substring.\n");
    }
    else
    {
        printf("Rejected: String does not contain 01 as substring.\n");
    }

    return 0;
}
