#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 typedef struct node 
{  
      struct node *prev;  
     node *next;  
    int data;  
};  
 void start(node* ptr){
     do{
        printf("%d",ptr->data);
        ptr=ptr->next;
     }while(ptr!=ptr->next);
 }
 node*spacific_track(node *ptr,node *p){
while(ptr!=NULL){
    if(ptr==p){
        return p;
    }
    else{
        ptr=ptr->next;
    }
}
 }

 remove_nth_tracK(node*ptr)
 {

     ptr->prev->next=ptr->next;
     ptr->next->prev=ptr->prev;
     free(ptr);
 }

  void next_track(node* current,int data){
if(current==NULL){
    rerurn;
}
else{
current=current->next;
printf("playing: %s\n",current->data);
  }
 }
void next_track(node* current,int data){
if(current==NULL){
    rerurn;
}
else{
current=current->prev;
printf("playing: %s\n",current->data);
  }
 }

 void show_playlist(node**head,int data){
     if(head==NULL){
         return;
     }
      node*show_ptr=head;
     int i=0;
     printf("\n");
     do{
         printf("song %d : %s\n",i,show_ptr->data);
         i++;
         show->ptr=show->ptr->next;

     }while(show_ptr!=NULL);
 }
void after_track(node*ptr,int val){
    node*temp=(node*)malloc(sizeof(node));
    tep->data=val;
    tmp->next=ptr->next;
    tmp->prev=ptr;
    ptr->next->prev=tmp;
    ptr->next=tmp;
    printf("%s",tmp->data);
}
void linklistTRAVARSAL( node*pts)
{
    while(pts!=NULL)
    {
    printf(" Element:%d\n",pts->data);//pointer to structure//
    pts=pts->next;
    }
}









































int main()
{
    int choice;
    printf("\n-------menu for music player-------\n");
    printf("S: start the player\n");
    printf("J: Jump to a specific track\n");
    printf("N: next track\n");
    printf("P: previous track\n");
    printf("F: first track\n");
    printf("L: last track\n");
    printf("A: add a track after an existing track\n");
    printf("B: add a track before an existing track\n");
    printf("R: remove a specific track from the list\n");
    printf("O: sort the tracks in alphabetical order\n");
    printf("T: stop the player\n");
    printf("C: change the track position\n");
    printf("D: display all tracks, Add a * besides the current track\n");
    scanf("%d",&choice);
    if(choice==S)
      start();
    else if(choice==J)
       specific_track();
    else if(choice==N)
        next_track();
    else if(choice==P)
     prev_track();
    else if(choice==F)
        first_track();
    else if(choice==L)
        last_track();
    else if(choice==A)
        after_track();
    else if(choice==B)
        before_track();
    else if(choice==R)
        remove_nth_tracK();
    else if(choice==O)
        alphabatical_sort();
    else if(choice==T)
        exit();
    else if(choice==C)
        position_change();
    else (choice==D)
        show_playlist();
         node * head;
     node * secoend;
     node* third;
     node* forth;
    head=( node*)malloc(sizeof( node));
    secoend=( node*)malloc(sizeof( node));
    third=( node*)malloc(sizeof( node));
    forth=( node*)malloc(sizeof( node));
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
    linklistTRAVARSAL(head);//function call//
    return 0;




}