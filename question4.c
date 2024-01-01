// Date-> 12/30/23 ,Author Name = Aman Singh

// 4. Write a function to find the next prime number of a given number. (TSRS)

#include <stdio.h>
int NextPrime(int num)
{
    int NextNum = num + 1;
    while (1)
    {
        int var = 1, flage = 0;
        while ((NextNum / 2) >= var)
        {
            if (NextNum % var == 0)
            {
                flage++;
                var++;
                if (flage > 1)
                    break;
            }
            else
                var++;
        }
        if (flage == 1)
            return NextNum;
        NextNum++;
    }
}
int main()
{
    int x;
    printf("Enter a number to print next prime number: ");
    scanf("%d", &x);
    printf("\nNext Prime number is %d.\n\n", NextPrime(x));
    return 0;
}