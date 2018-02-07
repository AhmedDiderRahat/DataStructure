//Write a Program to implements the 'Binary Search Algorithm' of array.
#include <stdio.h>

int main()
{
    int arr[100];
    int k, n, item;

    //Scan Number of Array element
    printf("Enter Number of Array Element: ");
    scanf("%d", &n);

    //Scan Array element
    printf("\nEnter Sorted Array element: ");
    for(k = 1; k <= n; k++){
        scanf("%d", &arr[k]);
    }

    //Scan Search ITEM
    printf("\nEnter your item: ");
    scanf("%d", &item);

    //SRTAR SEARCHING
    int beg = 1;
    int end = n;
    int mid = (beg + end) / 2;

    while((beg <= end) && (arr[mid] != item))
    {
        if(item < arr[mid]) end = mid - 1;
        else beg = beg + 1;
        mid = (beg + end) / 2;
    }

    if(arr[mid] == item)
        printf("\nSEARCH SUCCESSFUL & Location is: %d\n", mid);
    else
        printf("\nSEARCH UNSUCCESSFUL\n");
    //END SEARCHING

    return 0;
}
