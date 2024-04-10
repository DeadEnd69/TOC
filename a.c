#include <stdio.h>
#include <stdbool.h>

// Function to simulate DFA for strings starting with 01
bool acceptStartsWith01(char *str)
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
            return false;
    }
    return false;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (acceptStartsWith01(str))
    {
        printf("Accepted: String starts with 01.\n");
    }
    else
    {
        printf("Rejected: String does not start with 01.\n");
    }

    return 0;
}
