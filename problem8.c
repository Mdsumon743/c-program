#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int x;
    int pos=0, neg=0, eve=0, od=0;
    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            eve++;
        }
        else
        {
            od++;
        }

        if (x > 0)
        {
            pos++;
        }
        else if (x < 0)
      
       
        {
            neg++;
        }
    }

    printf("Even: %d\n", eve);
    printf("Odd: %d\n", od);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
}