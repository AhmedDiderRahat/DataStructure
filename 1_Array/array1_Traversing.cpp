//Write a Program to implements the 'Traversing Algorithm' of array.
#include <stdio.h>

int main()
{
    int arr[100];
    int k, n;

    printf("Enter how many number you want to scan: ");
    scanf("%d", &n);
    for(k = 1; k <= n; ++k){
        scanf("%d", &arr[k]);
    }

    //Apply PROCESS
    printf("\n");
    for(k = 1; k <= n; ++k){
        printf("%d ", arr[k]);
    }

    return 0;
}
