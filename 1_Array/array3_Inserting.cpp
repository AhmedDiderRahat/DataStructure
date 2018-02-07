//Write a Program to implements the 'Insertion Algorithm' of array.
#include <stdio.h>

int main()
{
    int arr[100];
    int k, i, j, n;

    //scan element number
    printf("Enter how many number you want to input: ");
    scanf("%d", &n);

    //scan ARRAY
    for(k = 1; k <= n; ++k)
        scanf("%d", &arr[k]);

    //scan POSITION number
    printf("\nWhich position you want to insert: ");
    scanf("%d", &i);


    //INSERTATION START
    j = n;
    while(j >= i)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    printf("\nInsert you Data: ");
    scanf("%d", &arr[i]);

    n++;
    //INSERTATION CLOSED

    //PRINT New Array
    printf("\nNew Array is: ");
    k = 1;
    while(k <= n){
        printf("%d ", arr[k]);
        k++;
    }
    printf("\n");

    return 0;
}
