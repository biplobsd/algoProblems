#include <stdio.h>


void swap(int *x, int *y)
{
    int tamp;
    tamp = *x;
    *x = *y;
    *y = tamp;
}

int partition(int array[], int left, int Right)
{

    int pivot = array[left];
    while (left != Right)
    {
        if (pivot == array[left])
        {
            if (array[Right] < pivot)
            {
                Right = Right - 1;
            }
            else if (array[Right] >= pivot)
            {
                swap(&array[left], &array[Right]);
                pivot = array[Right];
                left = left + 1;
            }
        }
        else if (pivot == array[Right])
        {
            if (array[left] > pivot)
            {
                left = left + 1;
            }
            else if (array[left] <= pivot)
            {
                swap(&array[left], &array[Right]);
                pivot == array[left];
                Right = Right - 1;
            }
        }
    }
    return left;
}

void Quicksort(int array[], int left, int Right)
{
    if (left < Right)
    {
        int pivot = partition(array, left, Right);
        Quicksort(array, left, pivot - 1);
        Quicksort(array, pivot + 1, Right);
    }
}

void main()
{
    int n, arr[100], output[100], target, noteNeeded = 0, fillIn;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    Quicksort(arr, 0, n-1);

    scanf("%d", &target);

    while (target > 0)
    {
        fillIn = 0;
        for (int i = 0; i < n; i++)
        {
            if (target >= arr[i])
            {
                target -= arr[i];
                output[noteNeeded]=arr[i];
                noteNeeded++;
                fillIn = 1;
                break;
            }
        }
        if (fillIn == 0)
        {
            break;
        }
    }
    if (fillIn == 0)
    {
        printf("Impossible\n");
    }
    else
    {
        printf("%d\n", noteNeeded);
        for (int i = 0; i < noteNeeded; i++)
        {
            printf("%d ", output[i]);
        }
    }
}


