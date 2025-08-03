#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z')
    {
        char lowercase = a + 32;
        printf("%c", lowercase);
    }
    else
    {
        char uppercase = a - 32;
        printf("%c", uppercase);
    }

    return 0;
}