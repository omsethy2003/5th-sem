// output array is sum of prefix

 #include<stdio.h>


int main(){
    int arr[5] = {5,8,6,3,2};
    int brr[5];

    int sum = 0;

    for(int i = 0; i < 5; i++){
        brr[i] = arr[i] + sum;
        sum = brr[i];
    }

    for(int i = 0; i < 5; i++){
        printf("%d\n",brr[i]);
    }
}
