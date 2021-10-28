#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct  node *link;
};

int main(){
    struct node *head,*newnode,*ptr;
    head=0;
    label:
   newnode=(struct node*)malloc(sizeof(struct node));
    
    printf("Enter data");
    scanf("%d",&newnode->data);
    if(head==0){
        newnode->link=NULL;
        head=newnode;
        ptr=newnode;
    }
    else{
        newnode->link=ptr;
        ptr=newnode;
    }
    printf("\n 1. Create more node\n2. Exit");
    int choice;
    scanf("%d",&choice);
    if (choice==1)
    {
        goto label;
    }
    else{
       while (ptr!=NULL)
       {
           printf("\n %d",ptr->data);
           printf("\n address : %d",ptr->link);
         ptr=ptr->link;
       }
       goto label;
    }
    
}
