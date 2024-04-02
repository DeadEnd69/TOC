#include <iostream>

using namespace std;

// WAP to implement DFA that accepts the string ending with 01 over an alphabet with sigma = {0,1}
int current = 0;

void q0(char);
void q1(char);
void q2(char);

int main()
{
    char c[25];
    int i = 0, starting, ending;
    cout << "Enter a string:" << endl;
    cin >> c;
    cout << "Enter the starting node:" << endl;
    cin >> starting;
    cout << "Enter the ending  node:" << endl;
    cin >> ending;
    current = starting;
    while (c[i])
    {
        switch (current)
        {
        case 0:
            q0(c[i]);
            break;
        case 1:
            q1(c[i]);
            break;
        case 2:
            q2(c[i]);
            break;
        }
        i++;
    }

    if (current == ending)
    {
        cout << "The string is accepted." << endl;
    }
    else
    {
        cout << "The string is rejected." << endl;
    }
    return 0;
}

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
        current = 1;
    }
    else if (c == '1')
    {
        current = 2;
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
        current = 0;
    }
    else
    {
        current = -1;
    }
}
