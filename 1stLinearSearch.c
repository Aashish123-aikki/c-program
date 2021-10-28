#include<stdio.h>

void main(){
    int a[6]={5,6,7,9,13};
    int b,flag;
    printf("Enter number to search");
    scanf("%d",&b);
    for(int i=0;i<sizeof(a);i++){
        if(a[i]==b){
            printf("Element is present at: %d",i+1);
            break;
        }
        else{
            flag=i+1;
        }
    }
    if(flag==sizeof(a)){
        printf("Element not found");
    }
}