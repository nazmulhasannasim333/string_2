#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);
    int a_len = strlen(a);
    int b_len = strlen(b);
    for (int i = 0; i <= b_len; i++)
    {
        a[a_len + i] = b[i];
    }
    printf("%s", a);
    return 0;
}