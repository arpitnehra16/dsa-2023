// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
#include <stdio.h>

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void Sort_012(int *a, int n)
{
    int low = 0;      // it indicates all 0's as they should be in starting
    int mid = 0;      // it indicates all 1's as they should be in b/w 0's and 1's
    int high = n - 1; // it indicates all 2's as they should be in the end

    // while (mid <= high)
    // {
    //     if (a[mid] == 0)
    //     {
    //         swap(&a[low++], &a[mid++]);
    //     }

    //     if (a[mid] == 1)                                                 // this is having some prob.
    //         mid++;

    //     if (a[mid] == 2)
    //     {
    //         swap(&a[mid], &a[high--]);
    //     }
    // }

    while (mid <= high)
    {
        switch (a[mid])
        {
            // If the element is 0
        case 0:
            swap(&a[low++], &a[mid++]);
            break;
            // If the element is 1
        case 1: //                                                              // this one is crct.
            mid++;
            break;
            // If the element is 2
        case 2:
            swap(&a[mid], &a[high--]);
            break;
        }
    }
}

int main()
{
    int n;
    printf("Enter the Number of Elements : ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the Elements(only 0, 1 and 2) in Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d Element : ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n\nUNSorted Array is : \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    Sort_012(a, n);

    printf("\n\nSorted Array is : \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}