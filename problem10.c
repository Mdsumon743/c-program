#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int x;
    int big = 0;
    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &x);
        if (x > big)
        {
            big = x;
        }
    }
    printf("%d", big);
    return 0;
}
