// Date-> 12/30/23 ,Author Name = Aman Singh

// 5. Write a function to print first N prime numbers (TSRN)

#include <stdio.h>
void FirstNPriNum(int x)
{
    for (int i = 1; i <= x; i++)
    {
        while (1)
        {
            int static num = 2;
            int var = 1, flage = 0;
            while ((num / 2) >= var)
            {
                if (num % var == 0)
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
            {
                printf("%d ", num);
                num++;
                break;
            }
            num++;
        }
    }
}
int main()
{
    int num;
    printf("Enter a number N to print fist N prime number: ");
    scanf("%d", &num);
    FirstNPriNum(num);
    return 0;
}