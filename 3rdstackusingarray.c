#include<stdio.h>
#include<conio.h>
int q2[7];
int n;
int q1[7];
int top=-1;

//push function...//
int push(){
    int a;
    if(top==7){
        printf("stack overflow\n");
    }else{
        printf("enter number to add: \n");
        scanf("%d",&a);
        top=top+1;
        q1[top]=a;
        n++;
    }
    
}
//dequeue function
int pop(){
    if(top==-1){
        printf("stack underflow");
    }
    else{
        q1[top]=0;
        top--;
        n--;
    }
}

//display..
int dis(){
    if(q1!=NULL){
        printf("Stack is: \n");
    for(int i=top;i>=0;i--){
          printf("%d,",q1[i]);
          }
        
          printf("\n");
}else{
    printf("Stack is empty");
    
}
}
//top..
int top1(){
    if(top!=-1 && top<=7){
        printf("Top element is: %d",q1[top]);
    }
}

//main function...
int main(){
    int optio;
    Label1:
    printf("\n1.Enqueue\n 2.Dequeue\n 3. Display\n 4.Top\n");
    scanf("%d",&optio);
   
    switch (optio)
    {
    case 1:
        push();
        goto Label1;
        break;
    
    case 2:
        pop();
        goto Label1;
        break;
    case 3:
        dis();
        goto Label1;
    break;
    case 4:
    top1();
    goto Label1;
    break;
    }
}

//end of program//