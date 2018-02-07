//Write a Program to implements the 'Deletion Algorithm' of array.
#include <stdio.h>

int main()
{
    int arr[100];
    int i, k, j, n;

    //scan element number
    printf("Enter how many number you want to input: ");
    scanf("%d", &n);

    //scan ARRAY
    for(k = 1; k <= n; ++k)
        scanf("%d", &arr[k]);

    //scan POSITION number
    printf("\nWhich position you want to delete: ");
    scanf("%d", &i);

    //START Array Deleting
    j = i;
    while(j <= n){
        arr[j] = arr[j + 1];
        j++;
    }
    n--;

    //PRINT Array
    printf("\nNew Array is: ");
    k = 1;
    while(k <= n){
        printf("%d ", arr[k]);
        k++;
    }
    printf("\n");

    return 0;
}
