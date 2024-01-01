// Date-> 12/30/23 ,Author Name = Aman Singh

// 7. Write a function to print first N terms of Fibonacci series (TSRN)

#include <stdio.h>
void FibSeries(int x);
int main()
{
    int num;
    printf("Enter a number N to print first N terms of fibonacci series: ");
    scanf("%d", &num);
    FibSeries(num);
    return 0;
}

void FibSeries(int x)
{
    printf("1 1 ");
    long long int num1 = 1,num2 = 2;
    for (int i = 2; i < x; i++)
    {
        num2 = num1 + num2;
        num1 = num2 - num1;
        printf("%lld ",num2);
    }
}