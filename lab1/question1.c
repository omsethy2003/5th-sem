//find second smallest and second largest element in the array

#include<stdio.h>
#include<limits.h>

int main(){
    int arr[5] = {5,8,6,3,2};

    int lr = arr[0];
    int sm = arr[0];
    int temps = INT_MAX;
    int templ = INT_MIN;

    for(int i=1; i<5; i++){
        if(arr[i] > lr){
            lr = arr[i];
        } 
        if(arr[i] < sm){
            sm = arr[i];
        }
    }

    for(int i=1; i<5; i++){
        if(arr[i]<lr && arr[i] > templ){
            templ = arr[i];
        } 
        if(arr[i]>sm && arr[i] < temps){
            temps = arr[i];
        } 
        
    }

    printf("the largest second largest number is : %d\n", templ);
    printf("the largest second smallest number is : %d", temps);
    
}