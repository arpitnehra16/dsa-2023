#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void Segregate_Elements(int a[], int n)
{
    int i = 0, j = 0;
    for (i; i < n; i++)
    {
        if (a[i] < 0)
        {
            if (i != j)
            {
                swap(&a[i], &a[j]);
            }
            j++;
        }
    }
}

int main()
{
    int n;
    printf("Enter the size of Array : ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the tha elements in Array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d Element : ", i + 1);
        scanf("%d", &a[i]);
    }

    Segregate_Elements(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}