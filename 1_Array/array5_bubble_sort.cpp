//Write a Program to implements the 'Bubble Algorithm' of array.
#include <stdio.h>

int main()
{
    int arr[100];
    int k, n, i;

    //Array element
    printf("Enter Number of Array Element: ");
    scanf("%d", &n);

    //Create ARRAY
    printf("\nEnter Array element: ");
    for(k = 1; k <= n; k++){
        scanf("%d", &arr[k]);
    }

    //START Sorting
    int temp;
    i = 1;
    while(i <= n - 1){
        k = 1;
        while(k <= n - i){
            if(arr[k] > arr[k + 1]){
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
            k++;
        }
        ++i;
    }
    //END sorting

    printf("\nNew Array is: ");
    k = 1;
    while(k <= n){
        printf("%d ", arr[k]);
        k++;
    }
    printf("\n");

    return 0;
}

