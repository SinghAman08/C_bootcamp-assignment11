// Date-> 12/30/23 ,Author Name = Aman Singh

// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)

#include <stdio.h>

void PriNumBtwTwo(int num1, int num2)
{
    for (int i = (num1 + 1); i < num2; i++)
    {
        int var = 1, flage = 0;
        while ((i / 2) >= var)
        {
            if (i % var == 0)
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
            printf("%d ", i);
    }
}

int main()
{
    int x, y;
    printf("Enter two numbers to print all Prime numbers between these two numbers: ");
    scanf("%d %d", &x, &y);
    PriNumBtwTwo(x, y);
    return 0;
}