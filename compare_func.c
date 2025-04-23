#include <stdio.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);
    int val = strcmp(a, b);
    if (val == 0)
    {
        printf("Equal\n");
    }
    else if (val < 0)
    {
        printf("a is smaller");
    }
    else if (val > 0)
    {
        printf("b is smaller");
    }
    return 0;
}