#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int arr[],int n){

    for(int i=0;i<n;i++){
        int key = arr[i];
        int j = i-1;

        while(key<arr[j]&&j>=0){
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
}
int main()
{
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);

    int arr[n];

    for(int i = 0;i < n; i++){
        printf("enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }

    insertion_sort(arr,n);

    printf("sorted array is : \n");
    for(int i = 0;i < n; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}   