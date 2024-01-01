// Date-> 12/29/23 ,Author Name = Aman Singh

// 2. Write a function to calculate HCF of two numbers. (TSRS)

#include <stdio.h>
int HCF(int num1, int num2)
{
    int var = 2;
    int ret = 1;
    while ((num1 >= var) && (num2 >= var))
    {
        if ((num1 % var == 0) && (num2 % var == 0))
        {
            ret = ret * var;
            printf("a ");
            num1 /= var;
            num2 /= var;
        }
        else
            var++;
            printf("b ");
    }
    return ret;
}
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("HCF of %d and %d is %d.\n", x, y, HCF(x, y));
    return 0;
}