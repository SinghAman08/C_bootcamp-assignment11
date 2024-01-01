// Date-> 12/30/23 ,Author Name = Aman Singh

// 3. Write a function to check whether a given number is Prime or not. (TSRS)

#include <stdio.h>
int IsPrime(int num)
{
    int var = 1;
    int flage = 0;
    while ((num / 2) >= var)
    {
        if (num % var == 0)
        {
            flage++;
            var++;
            if (flage > 1)
                return 0;
        }
        else
            var++;
    }
    return 1;
}
int main()
{
    int x;
    printf("Enter a number to cheak is it prime number or not: ");
    scanf("%d", &x);

    if (IsPrime(x) == 1)
        printf("Yes, %d is a prime number\n", x);
    else
        printf("No, %d is not a prime number\n", x);
    return 0;
}