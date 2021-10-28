#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *link;
};
void main(){
    struct  node *head,*newnode,*ptr;
    head=0;
    int choice;
    Label:
    newnode=(struct node*)malloc(sizeof(struct  node));
    newnode->link=0;
    printf("enter no");
    scanf("%d",&newnode->data);
    if(head==0){
        head=newnode;
        ptr=newnode;
    }else{
        ptr->link=newnode;
        ptr=newnode;
    }
    printf("\n1.to add more values\n2. display\n");
    scanf("%d",&choice);
    if(choice==1){
    goto Label;
}else{
    goto lal;
}
lal:
while (head!=NULL)
{
    printf("\n%d",head->data);
    printf("\n adress :%d",head->link);
    head=head->link;
}


}
