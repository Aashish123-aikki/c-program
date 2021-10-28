#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct  node *link;
};

//printing data..
void prit(struct node *head1){
    printf("data present: \n");
    while(head1!=NULL)
    {
         printf("%d  ",head1->data);
        head1=head1->link;
    }
}
//enter data at any point//
void push(struct node *head2,struct node *newnode2,int num){
    int numb;
    printf("Enter data:\n");
    scanf("%d",&numb);
    if(head2!=0){
        while (head2!=NULL)
        {
            if(head2->data==num){
                newnode2->link=head2->link;
                newnode2->data=numb;
                head2->link=newnode2;
                printf("Data added\n");
            
                return;
            }
            head2=head2->link;
        }
        
    }
    else{printf("Underflow");}
}

int main(){
    struct  node *head,*ptr,*newnode;
    int optn,number;
    head=0;
    lbl:
    printf("Enter task to perform: \n1. Front insertion\n2. Insersion at end\n3. Insersion In Between ");
    scanf("%d",&optn);
       newnode=(struct node*)malloc(sizeof(struct node));
      if(optn!=3 && optn!=4){ printf("Enter data:\n");
       scanf("%d",&newnode->data);}
       if(head==0){
           newnode->link=NULL;
           head=newnode;
           ptr=newnode;
           goto lbl;
       }
       else{
           if (optn==1)//when insertion at front//
           {
                 newnode->link=head;
           head=newnode;
           }
           else if (optn==2)//when insertion at end//
         {
             newnode->link=0;
             ptr->link=newnode;
             ptr=newnode;
         }
         else if (optn==3)//insertion at any point//
         {
             /* code */
            prit(head);//to print data//
            printf("\nEnter after which data you want to add new data: \n");
            scanf("%d",&number);
            push(head,newnode,number);
            printf("head is at: %d\n",head->data);
         }
         else if(optn==4){
             prit(head);
         }
         
         
    
    }
    
    
  goto lbl;
    
}