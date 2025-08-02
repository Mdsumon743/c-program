#include <stdio.h>
int main()
{

    int num;

    printf("Enter a number = ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        int sum = 0;

        for (int j = 1; j < i; j++)
        {

            if (i % j == 0)
            {
                sum = sum + j;
            }
        }

        if (sum == i)

            printf("This the Perfect Number %d\n", sum);
    }
}