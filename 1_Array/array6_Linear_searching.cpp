//Write a Program to implements the 'Linear Search Algorithm' of array.
#include <stdio.h>

int main()
{
    int arr[100];
    int k, n, item;

    printf("Enter Number of Array Element: ");
    scanf("%d", &n);

    printf("\nEnter Array element: ");
    for(k = 1; k <= n; k++){
        scanf("%d", &arr[k]);
    }

    printf("\nEnter your item: ");
    scanf("%d", &item);

    arr[n + 1] = item;

    int loc = 1;
    while(arr[loc] != item)
        loc++;
    if(loc == n + 1)
        printf("\nSEARCH UNSUCCESSFUL\n");
    else
        printf("\nSEARCH SUCCESSFUL & Location is: %d\n", loc);

    return 0;
}

