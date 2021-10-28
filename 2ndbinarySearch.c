#include<stdio.h>
//call function...
struct  addz
{
    /* data */
};

int check(int ary[],int n,int nsrch){
    int start=0;
    int end,mid;
        end=n-1;
    while (start<=end)
    { 
        mid=(start+end)/2;
        if(ary[mid]==nsrch){
            return mid;
            break;
        }else if(ary[mid]!=nsrch){

        }
        if (nsrch<ary[mid])
        {
            end=mid-1;
        }
        else if(nsrch>ary[mid]){

            start=mid+1;

        }
    

    }
    return -1;
}
//main function..
int main(){
    int ary[]={1,3,4,5,7,8};
    int n=sizeof(ary);
    int nsrch;
    printf("Enter number to search");
    scanf("%d",&nsrch);

    int result=check(ary,n,nsrch);
    
 if (result==-1) 
 {
    printf("Element not found");
 }
  else{
      printf("element found at: %d",result);
  }
    
}