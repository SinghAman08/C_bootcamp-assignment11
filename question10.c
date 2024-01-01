// Date-> 12/30/23 ,Author Name = Aman Singh

// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.(TSRS)

#include <stdio.h>
int fact(int x);

int factseries(int x)
{
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum = sum + (fact(i) / i);
        if (i == x)
            printf("%d!/%d = ", i, i);
        else
            printf("%d!/%d + ", i, i);
    }
    return sum;
}
int fact(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
        fact = fact * i;
    return fact;
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("\n");
    printf("%d\n\n", factseries(x));
    return 0;
}

