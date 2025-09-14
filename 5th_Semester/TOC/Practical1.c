// Write a C program to count number of 0 s and 1 s in a given string(without using Libraries)
#include <stdio.h>

int main()
{
    char str[] = "110011";
    printf("Given String is %s\n", str);
    int length = 0, zero = 0, one = 0;

    while (str[length] != '\0')
    {
        length += 1;
    }
    for (int i = 0; i < length; i++)
    {
        if (str[i] == '0')
        {
            zero += 1;
        }
        if (str[i] == '1')
        {
            one += 1;
        }
    }
    printf("The number of 0 in given binary string is %d\n", zero);
    printf("The number of 1 in given binary string is %d\n", one);
    return 0;
}