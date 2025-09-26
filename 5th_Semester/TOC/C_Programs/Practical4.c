// Implement a DFA in C program that accepts all strings containing atmost one '0' over alphabet{0,1}.

#include <stdio.h>

int main()
{
    char s1 = 'A', s2 = 'B', s3 = 'C', PS = 'A', str[100];

    int lenstr = 0;

    // input string
    printf("Enter a binary string: ");
    scanf("%s", str);

    // Check string is valid or not and if valid calculate length of string
    while (str[lenstr] != '\0')
    {
        if (str[lenstr] == '0' || str[lenstr] == '1')
        {
            lenstr++;
        }
        else
        {
            printf("Invalid string!! Only Binary numbers are allowed.");
            return 0;
        }
    }

    // DFA
    for (int i = 0; i < lenstr; i++)
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
            if (str[i] == '0' || str[i] == '1')
            {
                PS = 'C';
            }
            break;
        }
    }

    //Accept or Reject Condition
    if (PS == s2 || PS == s1)
    {
        printf("String Accepted(DFA: atmost one '0').");
    }
    else
    {
        printf("String Rejected(DFA: atmost one '0').");
    }
}
