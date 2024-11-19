#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list*next;
}A,B,C,D,E;;
struct list*funct(struct list*);
int main()
{
    struct list*ptr=NULL,*p=NULL;
    A.data=10;
    B.data=20;
    C.data=3090;
   // D.data=40;
   // E.data=50;
    A.next=&B;
    B.next=&C;
    C.next=NULL;
   // D.next=&E;
   // E.next=NULL;

    ptr=&A;
    p=ptr;
    printf("the original: ");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\nthe modified: ");
    p=funct(p);
   /* while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }*/
return 0;
}
/*struct list*funct(struct list*p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next->next;
    }
}*/
struct list* funct(struct list* p) {
    while (p != NULL && p->next != NULL) {
        printf("%d ", p->data);
        p = p->next->next;
    }
    if (p != NULL) { // This will print the last node if there’s an odd number of nodes
        printf("%d ", p->data);
    }
    return NULL;
}

