// 7) Implement a DFA in C program that accepts all strings containing three consecutive ones over alphabet {0,1}.

#include <stdio.h>

int main()
{
    char state = 'A';
    char str[100];

    printf("Enter a Binary String: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            printf("Invalid Input! Only binary digits (0 and 1) are allowed.\n");
            return 0;
        }

        switch (state)
        {
        case 'A':
            if (str[i] == '1')
            {
                state = 'B';
            }
            else
            {
                state = 'A';
            }
            break;

        case 'B':
            if (str[i] == '1')
            {
                state = 'C';
            }
            else
            {
                state = 'A';
            }
            break;

        case 'C':
            if (str[i] == '1')
            {
                state = 'D';
            }
            else
            {
                state = 'A';
            }
            break;

        case 'D':
            state = 'D';
            break;
        }
    }

    if (state == 'D')
    {
        printf("String Accepted (contains three consecutive 1's).\n");
    }
    else
    {
        printf("String Rejected (does not contain three consecutive 1's).\n");
    }

    return 0;
}
