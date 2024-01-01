// Date-> 12/29/23 ,Author Name = Aman Singh

// 1. Write a function to calculate LCM of two numbers. (TSRS)

#include <stdio.h>
int LCM(int num1, int num2)
{
    int var = 2;
    int ret = 1;
    while ((num1 > 1) || (num2 > 1))
    {
        if ((num1 % var == 0) && (num2 % var == 0))
        {
            ret = ret * var;
            num1 /= var;
            num2 /= var;
        }
        else
        {
            if (num1 % var == 0)
            {
                ret = ret * var;
                num1 /= var;
            }
            else if (num2 % var == 0)
            {
                ret = ret * var;
                num2 /= var;
            }
            else
                var++;
        }
    }
    return ret;
}
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("The LCM of %d is %d is %d.\n", x, y, LCM(x, y));
    return 0;
}