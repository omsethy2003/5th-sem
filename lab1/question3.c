#include<stdio.h>
#include<stdlib.h>

void rotate(int arr[],int m){
    int temp1 = arr[m-1];
    int temp2;
    while((m-1)>=0){

        arr[m-1] = arr[m-2];
        m--;
    }
    arr[0] = temp1;
}
int main(){
    int n;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    
    int arr[n];
    for(int i = 0;i < n; i++){
        printf("enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    int m;
    printf("enter the number of elements to be rotated: ");
    scanf("%d",&m);

    rotate(arr,m);

    for(int i = 0;i < n; i++){
        printf(" %d ,",arr[i]);
    }

}