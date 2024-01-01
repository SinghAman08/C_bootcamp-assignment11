// Date-> 12/30/23 ,Author Name = Aman Singh

// 8. Write a function to print PASCAL Triangle. (TSRN)

#include <stdio.h>
void PASCALtri(int x)
{
    int space,value;
    for (int i = 1; i <= x; i++)
    {
        for (space = 1; space <= (x - i); space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || j == 1)
                value = 1;
            else
                value = value * (i - j + 1) / (j - 1);
            printf("%2d", value);
        }
        printf("\n");
    }
}
int main()
{
    int x;
    printf("Enter a number for give the height to your PASCAL Tringle: ");
    scanf("%d", &x);
    PASCALtri(x);
    return 0;
}