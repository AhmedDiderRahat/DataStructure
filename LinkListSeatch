#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int info;
    struct node *link;
}Node,*Nodeptr;

Nodeptr makeNode(int n)
{
    Nodeptr np=(Nodeptr) malloc(sizeof(Node));
    np->info=n;
    np->link=NULL;
    return np;
}

int searching(Nodeptr start, int item)
{
    Nodeptr LOC=NULL;
    Nodeptr ptr=start;

    int ind=0;
    while(ptr!=NULL)
    {
        ind++;
        if(item==ptr->info){
                LOC=ptr;
                return ind;
        }
        else ptr=ptr->link;
    }
    return 0;
}

int main()
{
    int n, item,L;
    Nodeptr start,np,last;
    start=NULL;

    printf("Enter your number(-1 to finish):\n");
    while (scanf("%d",&n)==1)
    {
        if(n==-1)
            break;

        np=makeNode(n);

        if(start==NULL)
            start=np;
        else
            last->link=np;

        last=np;
    }

    printf("\nEnter search item:\n ");
    scanf("%d", &item);

    L=searching(start, item);

    if(L==0)
        printf("Not Found");
    else
        printf("Found is location %d",L);

    return 0;
}
