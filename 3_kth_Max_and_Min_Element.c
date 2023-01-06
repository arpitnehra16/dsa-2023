// Find the maximum and minimum element in an array
#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int kth_Smallest_element(int a[], int n, int k)
{
    qsort(a, n, sizeof(int), cmpfunc);
    k = a[k - 1];

    // printf("Array after sort : \n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d : ", a[i]);
    // }

    return k;
}

int kth_Largest_element(int a[], int n, int k)
{
    qsort(a, n, sizeof(int), cmpfunc);
    k = a[n - k];

    // printf("Array after sort : \n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d : ", a[i]);
    // }

    return k;
}

int main()
{
    int n, k, i;
    printf("Enter the number of elments : ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the number of elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter %d Element : ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nEnter the Kth Max and Min Number to find : ");
    scanf("%d", &k);

    printf("\n the %d Min element is : %d \n", k, kth_Smallest_element(a, n, k));
    printf("\n the %d Max element is : %d", k, kth_Largest_element(a, n, k));

    return 0;
}