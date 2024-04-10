// WAP to implement DFA that accepts the strings having substring as 001 over an alphabet sigma = {0,1}

#include <stdio.h>

int current;

void q0(char c)
{
    if (c == '0')
    {
        current = 1;
    }
    else if (c == '1')
    {
        current = 0;
    }
    else
    {
        current = -1;
    }
}
void q1(char c)
{
    if (c == '0')
    {
        current = 2;
    }
    else if (c == '1')
    {
        current = 0;
    }
    else
    {
        current = -1;
    }
}
void q2(char c)
{
    if (c == '0')
    {
        current = 1;
    }
    else if (c == '1')
    {
        current = 3;
    }
    else
    {
        current = -1;
    }
}
void q3(char c)
{
    if (c == '0')
    {
        current = 1;
    }
    else if (c == '1')
    {
        current = 0;
    }
    else
    {
        current = -1;
    }
}

void main()
{
    int starting, ending, i = 0;
    char str[25];
    printf("Enter the string:");
    scanf("%s", str);
    printf("Enter the starting node:");
    scanf("%d", &starting);
    printf("Enter the ending node:");
    scanf("%d", &ending);
    current = starting;

    while (str[i])
    {
        switch (current)
        {
        case 0:
            q0(str[i]);
            break;
        case 1:
            q1(str[i]);
            break;
        case 2:
            q2(str[i]);
            break;
        case 3:
            q3(str[i]);
            break;

        default:

            break;
        }
        i++;
    }

    if (current == ending)
    {
        printf("The string is accepted.");
    }
    else
    {
        printf("The string is rejected.");
    }
}