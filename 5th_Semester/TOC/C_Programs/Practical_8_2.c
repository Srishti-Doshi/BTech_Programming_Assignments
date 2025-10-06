/* 8.2) Implement a DFA in C program that accepts all strings divisible by 3 over alphabet {0 to 9}.
        or
   Design a program for creating a machine that accepts 10 Mod 3 or Mod3 (base10).
*/

#include <stdio.h>

int main()
{
        char state = 'A';
        char str[100];

        printf("Enter a string (digits 0 to 9): ");
        scanf("%s", str);

        for (int i = 0; str[i] != '\0'; i++)
        {
                if (str[i] < '0' || str[i] > '9')
                {
                        printf("Invalid Input! Only digits 0–9 are allowed.\n");
                        return 0;
                }

                switch (state)
                {
                case 'A':
                        if (str[i] == '0' || str[i] == '3' || str[i] == '6' || str[i] == '9')
                        {
                                state = 'A';
                        }
                        else if (str[i] == '1' || str[i] == '4' || str[i] == '7')
                        {
                                state = 'B';
                        }
                        else if (str[i] == '2' || str[i] == '5' || str[i] == '8')
                        {
                                state = 'C';
                        }
                        break;

                case 'B':
                        if (str[i] == '0' || str[i] == '3' || str[i] == '6' || str[i] == '9')
                        {
                                state = 'B';
                        }
                        else if (str[i] == '1' || str[i] == '4' || str[i] == '7')
                        {
                                state = 'C';
                        }
                        else if (str[i] == '2' || str[i] == '5' || str[i] == '8')
                        {
                                state = 'A';
                        }
                        break;

                case 'C':
                        if (str[i] == '0' || str[i] == '3' || str[i] == '6' || str[i] == '9')
                        {
                                state = 'C';
                        }
                        else if (str[i] == '1' || str[i] == '4' || str[i] == '7')
                        {
                                state = 'A';
                        }
                        else if (str[i] == '2' || str[i] == '5' || str[i] == '8')
                        {
                                state = 'B';
                        }
                        break;
                }
        }

        if (state == 'A')
        {
                printf("String Accepted (Divisible by 3).\n");
        }
        else
        {
                printf("String Rejected (Not divisible by 3).\n");
        }

        return 0;
}
