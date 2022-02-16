#include<stdio.h>

int binarySearch(int arr[],int length, int target){
    int start = 0, end = length-1, mid;
    int numOfMchg = 0;
    while(start<=end){
        mid = (start+end)/2;
        numOfMchg++;
        if(target < arr[mid]){
            end = mid - 1;
        }else if(target > arr[mid]){
            start = mid + 1;
        }else{
            return numOfMchg;
        }
    }
    return numOfMchg;
}

void main(){
    int arr[300];
    int target;
    int length;
    scanf("%d", &length);
    for (int i = 0; i < length; i++)
    {   
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);

    printf("%d\n", binarySearch(arr,length, target));
    
}
