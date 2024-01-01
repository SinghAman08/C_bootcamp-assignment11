// Date-> 12/30/23 ,Author Name = Aman Singh

// 9. Write a program in C to find the square of any number using the function.(TSRS)

#include <stdio.h>
int square(int x)
{
    return x * x;
}
int main()
{
    int x;
    printf("Enter a number to print square of that number: ");
    scanf("%d", &x);

    printf("\nsquare of %d is %d.\n\n", x, square(x));
    return 0;
}