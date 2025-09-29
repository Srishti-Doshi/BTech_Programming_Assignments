// Implement a DFA in C program that accepts all strings containing only '0's over alphabet{0,1}.

#include <stdio.h>

int main()
{
    char str[100];
    char PS = 'A'; // Start state (accepting)

    printf("Enter a binary string: ");
    scanf("%s", str);

    // DFA traversal
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
                PS = 'A';
            else
                PS = 'B';
            break;

        case 'B':
            PS = 'B'; // stays in trap state
            break;
        }
    }

    // Final check
    if (PS == 'A')
        printf("String Accepted (only 0's).\n");
    else
        printf("String Rejected (only 0's).\n");

    return 0;
}
