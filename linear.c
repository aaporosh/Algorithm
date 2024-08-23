#include<stdio.h>
int main(){
    int n,i,j;

    printf("Enter the size of array :");
    scanf("%d",&n);
    int array[n];

    for(int i =0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(j=0;j<n;j++){
        if(array[j]==5){
        printf("Element is here : %d and index %d",array[j],j+1);
        }
    }
}