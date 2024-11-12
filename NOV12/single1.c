#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }//4 1 2 1 2
    int result=0;
    for(int i=0;i<n;i++){
        result=result^arr[i];
        //4^1=5
        //5^2=7
        //7^1=6
        //6^2=4
    }
    printf("%d",result);
}
