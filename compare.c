#include <stdio.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);
    int idx = 0;
    while (1)
    {
        if (a[idx] == '\0' && b[idx] == '\0')
        {
            printf("Equal");
            break;
        }
        else if (a[idx] == '\0')
        {
            printf("a is smaller");
            break;
        }
        else if (b[idx] == '\0')
        {
            printf("b is smaller");
            break;
        }
        else if (a[idx] == b[idx])
        {
            idx++;
        }
        else if (a[idx] < b[idx])
        {
            printf("a is smaller");
            break;
        }
        else if (a[idx] > b[idx])
        {
            printf("b is smaller");
            break;
        }
    }

    return 0;
}