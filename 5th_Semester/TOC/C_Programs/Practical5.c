// Implement a DFA in C program that accepts all strings containing atleast one '0' over alphabet{0,1}.
#include <stdio.h>

int main()
{
    char str[100];
    char PS = 'A';

    printf("Enter a binary string: ");
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
                PS = 'B';
            else
                PS = 'A';
            break;

        case 'B':
            if (str[i] == '0')
                PS = 'T';
            else
                PS = 'B';
            break;

        case 'T':
            PS = 'T';
            break;
        }
    }

    if (PS == 'B')
        printf("String Accepted (DFA: exactly one '0').\n");
    else
        printf("String Rejected (DFA: exactly one '0').\n");

    return 0;
}
