#include <stdio.h>
int main()
{

    int a, b;

    printf("Enter Number A =");
    scanf("%d", &a);
    printf("Enter Number B = ");
    scanf("%d", &b);
    if (a >= b)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}