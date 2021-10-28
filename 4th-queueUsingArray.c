#include<stdio.h>
#include<conio.h>
int max=7;
int stack[7];

int top=-1;
int end=-1;
int numer;
int push(){
    if(end>=max){
        printf("Queue overflow");
    }else{
        printf("Enter Element\n");
    scanf("%d",&numer);
        end=end+1;
       top=0;
        stack[end]=numer;
        return 0;
    }
}
int pop(){
    if(top>end){
        printf("Queue underflow\n");
    }
    else{
        top=top+1;
    }
}
int top1(){
    if(top==-1){
        printf("Queue underflow\n");
    }
    else{
        printf("Top Element is: %d",stack[top]);
    }
}
int display(){
    if(top>end){
        printf("Queue overflow");
    }
    else{
        printf("Queue is:\n");
        for(int i=top;i<=end;i++){
            printf("%d ",stack[i]);
        }
    }
}
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
        display();
        goto Label1;
    break;
    case 4:
    top1();
    goto Label1;
    break;
    }
}

//end of program//