// Implement a DFA in C program that accepts all strings ending with '101' over alphabet {0,1}.

#include <stdio.h>

int main()
{
    char str[100];
    char state = 'A';

    printf("Enter a binary string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            printf("Invalid string! Only 0 and 1 are allowed.\n");
            return 0;
        }

        switch (state)
        {
        case 'A':
            if (str[i] == '0')
                state = 'A';
            else
                state = 'B';
            break;

        case 'B':
            if (str[i] == '0')
                state = 'C';
            else
                state = 'B';
            break;

        case 'C':
            if (str[i] == '0')
                state = 'A';
            else
                state = 'D';
            break;

        case 'D':
            if (str[i] == '0')
                state = 'C';
            else
                state = 'B';
            break;
        }
    }

    if (state == 'D')
        printf("String Accepted (ends with '101').\n");
    else
        printf("String Rejected (does not end with '101').\n");

    return 0;
}
