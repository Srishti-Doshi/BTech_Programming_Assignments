/*Question: Write a C program to check whether a given binary string contains an even number of 0s or 1s.*/

#include<stdio.h>
int main()
{
    printf("\n");
    printf("--- Program: Even or Odd Count of 0s and 1s ---\n");
    printf("Program By: Srishti Doshi\n");
    printf("Enrollment Number: 0873CS231123\n");

    char str[50];
    int length = 0, zero = 0, one = 0;

    printf("Enter a Binary String: ");
    scanf("%s",str);

    while(str[length]!='\0')
    {
        length++;
    }
    
    for(int i = 0; i<length; i++)
    {
        if(str[i]=='0')
        {
            zero++;
        }
        else if(str[i]=='1')
        {
            one++;
        }
        else
        {
            printf("Invalid input!!");
            return 0;
        }
    }

    printf("For Entered Binary String: \n");

    if(zero%2==0)
    {
        printf("Number of 0s is even\n");
    }
    else
    {
        printf("Number of 0s is odd\n");
    }

    if(one%2==0)
    {
        printf("Number of 1s is even\n");
    }
    else
    {
        printf("Number of 1s is odd\n");
    }

    return 0;
}