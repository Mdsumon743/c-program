#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    // max
    int max = 0;
    if (a < b && c < b)
    {
        max = b;
    }
    else if (b < a && c < a)
    {
        max = a;
    }
    else
    {
        max = c;
    }
    //min 
    int  min = 0;
    if(b>a && c>a){
      min = a;
    }else if (a>b && c>b){
        min = b;
    }else{
        min = c;
    }
    printf("%d %d",min ,max);
    return 0;
}