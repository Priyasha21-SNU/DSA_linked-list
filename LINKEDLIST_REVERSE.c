#include<string.h>
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
int linklistTRAVARSAL(struct node*pts)
{
    while(pts!=NULL)
    {
    printf(" Element:%d\n",pts->data);//pointer to structure//
    pts=pts->next;
    }
}
int
