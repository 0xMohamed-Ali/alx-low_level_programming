#include <stdio.h>

int main()
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
    int len = sizeof(a) / sizeof(a[0]);
    int temp;
    int i = len - 1;
    int j = 0;

    for (j = 0; j < (len / 2); j++)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i--;
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", a[i]);
    }
}
