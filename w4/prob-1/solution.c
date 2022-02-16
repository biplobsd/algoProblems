#include<stdio.h>
int o = 0;

void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int array[], int left, int right){
    int pivot = array[left];
    o++;

    while(left != right){
        if(pivot == array[left]){
            if(array[right] > pivot){
                right--;
            }else if(array[right] <= pivot){
                swap(&array[left], &array[right]);
                pivot = array[right];
                left++;
            }
        }else if(pivot == array[right]){
            if(array[left]<pivot){
                left++;
            }else if(array[left] >= pivot){
                swap(&array[left], &array[right]);
                pivot = array[left];
                right--;
            }
        }
    }
    return left;
}

void quickSort(int array[],int left,int right){
    if(left<right){
        int pivot = partition(array, left, right);
        quickSort(array, left, pivot-1);
        quickSort(array, pivot+1, right);
        
    }
}


void main(){

    int arr[100], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    

    quickSort(arr, 0, n-1);
    
    
    printf("%d\n", o);
    

    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    
}


