#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *prev,*next ;
};
void main(){
    int number,choice;
    struct node *head,*newnode;
    head=0;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data");
    scanf("%d",&number);
    if (head==0)
    {
       newnode->next=NULL;
       newnode->prev=NULL;
        newnode->data=number;
        head=newnode;
    }
    else{
        head->prev=newnode;
        newnode->next=head;
        newnode->prev=NULL;
        newnode->data=number;
        head=newnode;
    }
    printf("\nEnter Choice: \n1. Add node \n2.Display");
    scanf("%d",&choice);
    } while (choice==1);
    if (choice==2)
    {
      while(head!=NULL){
          printf("\ndata is: %d",head->data);
          head=head->next;
      }
    }
    
   
    
}