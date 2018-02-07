//Write a Program to implements the 'Traversing Algorithm' of array using Function.
#include <stdio.h>
#include <stdlib.h>

void travarse(int *p, int n)
{
    printf("Your Array is: ");
    int k;
    for(k=0; k<n; k++)
        printf("%d ", *(p + k));

    printf("\n");
}

int main()
{
    int arr[100];
    int *p = arr;
    int k, n;

    printf("Enter Number of Array: ");
    scanf("%d", &n);

    printf("Enter your Array: ");
    for(k = 0; k < n; k++)
        scanf("%d", &arr[k]);

    char t;
    scanf("%c", &t);
    printf("\nPress 'T' key for Traverse: ");
    scanf("%c", &t);

    if(t == 'T')
        travarse(p, n);

    return 0;
}
