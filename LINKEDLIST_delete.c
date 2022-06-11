#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
void linklistTRAVARSAL(struct node*pts)
{
    while(pts!=NULL)
    {
    printf(" Element:%d\n",pts->data);//pointer to structure//
    pts=pts->next;
    }
}
//delete 1st element//
struct node * deletefirst(struct node*head)
{
    struct node* pts=head;
    head=head->next;
    free(pts);
    return head;
};
//delete at index element//
struct node *deleteatindex(struct node*head,int index)
{
     struct node*p=head;
     struct node*q=head->next;
     for(int i=0;i<index-1;i++)
     {
         p=p->next;
         q=q->next;
     }
     p->next=q->next;
     free(q);
     return head;
}
int main()
{
    //dynamic memory allocation//
    struct node * head;
    struct node * secoend;
    struct node* third;
    struct node* forth;
    head=(struct node*)malloc(sizeof(struct node));
    secoend=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    forth=(struct node*)malloc(sizeof(struct node));
    //link 1st and second//
    head->data=7;
    head->next=secoend;
    //link 2nd and 3rd//
    secoend->data=11;
    secoend->next=third;
    //link 3rd and 4th//
    third->data=12;
    third->next=forth;
//link 4th and null//
    forth->data=16;
    forth->next=NULL;
    printf("\nlinked list before deletion\n");
    linklistTRAVARSAL(head);//function call//
    //head=deletefirst(head);//1st element delete//
    head=deleteatindex(head,2);
    printf("\nlinked list after deletion\n");

    return 0;
}
