#include <stdio.h>
int tim_max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int kq = tim_max(a, n);
    printf("%d", kq);

    return 0;
}