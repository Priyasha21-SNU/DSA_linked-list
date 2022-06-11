
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
struct node * insertAtAFTER(struct node * head,struct node *prevnode,int data)
{
  struct node * pts=(struct node *)malloc(sizeof(struct node));
  pts->data=data;
  pts->next=prevnode->next;
  prevnode->next=pts;
  return head;
}
struct node * insertATindex(struct node *head ,int data,int index)
{
    struct node *pts=(struct node*)malloc(sizeof(struct node));
   struct node * p =head;
   int i=0;
   while(i!=index-1)
   {
       p=p->next;
       i++;
   }
   pts->data=data;
   pts->next=p->next;
   p->next=pts;
   return head;
}
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
struct node *addbefore(struct node * head,int data,int index)
{
    return insertATindex(head,data,index-1);
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
    //link 2nd and 3ed//
    secoend->data=11;
    secoend->next=third;
    //link 3ed and 4th//
    third->data=12;
    third->next=forth;
//link 4th and null//
    forth->data=16;
    forth->next=NULL;
    printf("linked list before insertion\n");
    linklistTRAVARSAL(head);//function call//
    head=insertATindex(head,59,2);
    insertAtAFTER( head,secoend,90);
    head=deleteatindex(head,2);
    head=addbefore(head,9,third);
    printf("linked list after insertion\n");
    linklistTRAVARSAL(head);
    return 0;
}
