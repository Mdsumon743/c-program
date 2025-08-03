#include <stdio.h>
int main()
{
    char inp;
    scanf("%c", &inp);
    if (inp >= '0' && inp <= '9')
    {
        printf("IS DIGIT");
    }
    else if (inp >= 'A' && inp <= 'Z')
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else if (inp >= 'a' && inp <= 'z')
    {
        printf("ALPHA\nIS SMALL");
    }

    return 0;
}