#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *left,*right;
};
struct node *create(){

    int x;
  struct node *newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("Enter data\n");
  scanf("%d",&x);
  if(x==0){
      return 0;
  }
  newnode->data=x;
  printf("Enter left child of %d\n",x);
  newnode->left=create();
  printf("Enter right child of %d\n",x);
  newnode->right=create();
  return newnode;
}

//printing data.........//
void show(struct node *rt){
    struct node *l,*r;
    l=rt->left;
    r=rt->right;
    if(l!=0){
        printf("left: %d ",l->data);
        show(l);
      
    }
    if(r!=0){
       printf("right: %d ",r->data);
        show(r);
    }

}
void main(){
    struct node *root;
    root=NULL;
    root=create();
    printf("printing the data: ");
    show(root);
    }
    

