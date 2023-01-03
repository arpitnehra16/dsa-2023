#include<stdio.h>
#include<stdlib.h>

int *Reverse_arr( int* a , int n ){
    int b[n];
    int i ,j=0;
    
    for( i = n-1 ; i >= 0 ; i --){
        b[j++] = a[i];
    }
    // for( i = 0 ; i < n ; i ++){
    //     b[i] = a[c-1];
    //     c--;
    // }

    printf("Reversed Array is :\n");

    // for(i = 0 ; i < n ; i++){
    //     printf("%d \n",b[i]);
    // }
    return b;
}


int main()
{
    int n , i ;
    // int * a , *b;

    printf("Enter the Number of Elements : ");
    scanf("%d",&n);
    int a[n],b[n];

    // a = (int *)malloc( n * sizeof(int));
    // b = (int *)malloc( n * sizeof(int));

    if( a == NULL )
    {
        printf("Memmory is not allocated to ARRAY ");
    }

    printf("Enter the numbers in ARRAY\n\n");

    for( i = 0 ; i < n ; i++ )
    {
        printf("Enter %d element : ", i+1);
        scanf("%d", &a[i]);
    }
    printf("\n\n");

    b = Reverse_arr( a , n );
     for(i = 0 ; i < n ; i++){
        printf("%d \n",b[i]);
    }

   return 0 ;
}