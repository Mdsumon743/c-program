#include <stdio.h>
#include<stdbool.h>

int main()
{
    int num;
    printf("Enter a Number = ");
    scanf("%d", &num);

    printf("Prime numbers between 1 and %d are:\n", num);

    for (int i = 2; i <= num; i++)
    {
        bool isPrime = true;

        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = false ;
                break;
            }
        }

        if (isPrime)
        {
            printf("%d \n", i);
        }
    }

    printf("\n");
    return 0;
}
