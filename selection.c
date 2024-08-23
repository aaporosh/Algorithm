#include<stdio.h>
int main(){
    int n ,i,j,temp;
    printf("declear the size of array :");
    scanf("%d",&n);
    int a[n];
    
    printf("Array :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                temp = a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
        for(j=0;j<n;j++){
        printf("%d ",a[j]);
    }
    printf("\n");
    }
    printf("\nAfter sorted the Array :");
    for(j=0;j<n;j++){
        printf("%d ",a[j]);
    }
}