// Implement a DFA in C program that accepts all strings containing atleast one '0' over alphabet{0,1}.
#include <stdio.h>

int main()
{
    char state1 = 'A', state2 = 'B', PresentState = 'A';
    char str[100];

    printf("Enter a Binary string: ");
    scanf("%s", str);

    // Calculate Length of String
    int lenstr = 0;
    while (str[lenstr] != '\0')
    {
        lenstr++;
    }

    // Reject Non-Binary String
    int wrongchar = 0;
    for (int i = 0; i < lenstr; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            wrongchar++;
        }
    }
    if (wrongchar > 0)
    {
        printf("Invalid String!!, Non-Binary Characters are not allowed...");
        return 0;
    }

    // DFA
    for (int i = 0; i < lenstr; i++)
    {
        switch (PresentState)
        {
        case 'A':
            if (str[i] == '0')
            {
                PresentState = state2;
            }
            else
            {
                PresentState = state1;
            }
            break;

        case 'B':
            if (str[i] == '0' || str[i] == '1')
            {
                PresentState = state2;
            }
            break;
        }
    }
    if (PresentState == state2)
    {
        printf("String Accepted.");
    }
    else
    {
        printf("String Rejected.");
    }
}