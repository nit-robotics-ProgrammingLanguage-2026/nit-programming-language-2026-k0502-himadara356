#include <stdio.h>

int main(void)
{
    int input;
    int x;
    scanf("%d", &input);
    x = input;
    if (10<=x&&x!=12&&x>=15)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}
