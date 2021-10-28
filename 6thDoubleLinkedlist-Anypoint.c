#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *prev,*next ;
};
void main(){
    int number,choice;
    int pos;
    struct node *head,*newnode,*temp,*ptr;
    head=0;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\n1.Insert at beginning\n2.Insertion at last\n3. Insertion at any point\n");
        scanf("%d",&pos);
    printf("\nEnter the data");
    scanf("%d",&number);
    if (head==0)
    {
       newnode->next=NULL;
       newnode->prev=NULL;
        newnode->data=number;
        head=newnode;
        ptr=newnode;
    }
    else{
        if(pos==1){
        head->prev=newnode;
        newnode->next=head;
        newnode->prev=NULL;
        newnode->data=number;
        head=newnode;
    }
        else if(pos==2){
            ptr->next=newnode;
            newnode->prev=ptr;
            newnode->data=number;    
            newnode->next=NULL;
            ptr=newnode;
        }
        else if(pos==3){
            int x;
            temp=head;
            while(temp!=NULL){
                    printf("\n Data : %d",temp->data);
                    temp=temp->next;
            }
            printf("\n insert data after: ");
            scanf("%d",&x);
            temp=head;
            while(temp!=NULL){
                if(temp->data==x){
                    newnode->data=number;
                    newnode->prev=temp;
                    newnode->next=temp->next;
                    temp->next=newnode;
                    printf("Updated");
                    if(temp->next!=NULL){
                        temp->next->prev=newnode;

                    }else{
                        ptr=newnode;
                    }
                    break;
                }
            }
        }
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