#include <stdio.h>
#include <string.h>

int main()
{
    char str1[21], str2[21];
    scanf("%s %s", str1, str2);
    int val = strcmp(str1, str2);
    if (val < 0)
    {
        printf("%s", str1);
    }
    else if (val > 0)
    {
        printf("%s", str2);
    }
    else
    {
        printf("%s", str1);
    }
    return 0;
}