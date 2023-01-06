// Given an array A of size N of integers. Your task is to find the sum of minimum and maximum element in the array.

#include <stdio.h>
#include <stdlib.h>

int Max_element(int *a, int n)
{
    int max = a[0];

    for (int i = 0; i < n; i++)
    {
        if (max <= a[i])
        {
            max = a[i];
        }
    }
    return max;
}

int Min_element(int *a, int n)
{
    int min = a[0];

    for (int i = 0; i < n; i++)
    {
        if (min >= a[i])
        {
            min = a[i];
        }
    }
    return min;
}

int main()
{
    int n, Max, Min, Sum;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n];

    printf("Enter the elements in Array : \n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n");

    Max = Max_element(a, n);
    Min = Min_element(a, n);

    printf("The Max Element is : %d \n", Max);
    printf("The Min element is : %d \n", Min);

    printf("The Sum of Maximum And Minimum element is : %d ", Max + Min);

    return 0;
}