// Implement a DFA in C program that accepts all strings ending with '101' over alphabet{0,1}.

#include <stdio.h>

int main()
{
    char str[100];
    char PS = 'A';

    printf("Enter a Binary String: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            printf("Invalid string!! Only Binary numbers are allowed.\n");
            return 0;
        }

        switch (PS)
        {
        case 'A':
            if (str[i] == '0')
            {
                PS = 'A';
            }
            else
            {
                PS = 'B';
            }
            break;

        case 'B':
            if (str[i] == '0')
            {
                PS = 'C';
            }
            else
            {
                PS = 'B';
            }
            break;

        case 'C':
            if (str[i] == '0')
            {
                PS = 'A';
            }
            else
            {
                PS = 'D';
            }
            break;

        case 'D':
            if (str[i] == '0')
            {
                PS = 'C';
            }
            else
            {
                PS = 'B';
            }
            break;
        }
    }

    if (PS == 'D')
        printf("String Accepted (DFA ending with '101').");
    else
        printf("String Rejected (DFA ending with '101').");

    return 0;
}