// 5) Implement a DFA in C program that accepts all strings containing at most one '0' over alphabet {0,1}.

#include <stdio.h>

int main()
{
    char state = 'A';
    char str[100];

    printf("Enter a binary string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            printf("Invalid String! Only 0 and 1 are allowed.\n");
            return 0;
        }

        switch (state)
        {
        case 'A':
            if (str[i] == '0')
                state = 'B';
            else
                state = 'A';
            break;

        case 'B':
            if (str[i] == '0')
                state = 'C';
            else
                state = 'B';
            break;

        case 'C':
            state = 'C';
            break;
        }
    }

    if (state == 'A' || state == 'B')
        printf("String Accepted (at most one '0').\n");
    else
        printf("String Rejected (more than one '0').\n");

    return 0;
}
