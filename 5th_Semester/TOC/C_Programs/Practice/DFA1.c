// Implement a DFA in C program that accepts all strings containing atleast one '1' over alphabet{0,1}.
#include <stdio.h>

int main()
{
    char s1 = 'A', s2 = 'B', PS = 'A', str[100];
    int length = 0;

    // Take input string
    printf("Enter a Binary String:");
    scanf("%s", str);

    // calculate length of string
    while (str[length] != '\0')
    {
        length++;
    }

    // Check if string is valid or invalid
    for (int i = 0; i < length; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            printf("Invalid String!! Non Binary numbers are not allowed..");
            return 0;
        }
    }

    // DFA
    for (int i = 0; i < length; i++)
    {
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
            if (str[i] == '0' || str[i] == '1')
            {
                PS = 'B';
            }
        }
    }

    if(PS=='B')
    {
        printf("String Accepted by DFA(for atleast '1')");
    }
    else
    {
       printf("String Rejected by DFA(for atleast '1')"); 
    }
}