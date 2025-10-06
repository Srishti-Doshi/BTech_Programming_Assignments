/*8.1) Implement a DFA in C program that accepts all strings divisible by 3 over alphabet{0,1}.
        or
     Design a program for creating a machine that accepts 2 Mod 3 or mod3(base2).*/ 

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
                        printf("Invalid input! Only binary numbers are allowed.\n");
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
                                state = 'A';
                        break;

                case 'C':
                        if (str[i] == '0')
                                state = 'B';
                        else
                                state = 'C';
                        break;
                }
        }

        if (state == 'A')
                printf("String Accepted (divisible by 3).\n");
        else
                printf("String Rejected.\n");

        return 0;
}
