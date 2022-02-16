#include <stdio.h>

void display(int *a, int size){
    for(int i=0;i<size;i++){
        printf("%d ", *(a+i));
    }
}

void reverse(int *a, int size, int *re){
    int revI =0;
    int arrI = size -1;
    
    while(arrI >= 0){
        
        re[revI] = a[arrI];
        revI++;
        arrI--;
    }
}

int main(){
    int arr[100], re[100];
    int size, i, arrI, revI;
    
    scanf("%d", &size);
    
    for(i=0;i<size; i++){
        scanf("%d", &arr[i]);
    }
    
    reverse(arr, size, re);
    display(re, size);
    
    
}
