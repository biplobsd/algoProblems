#include<stdio.h>

void main(){
    int n, tmp;
    int list[99];

    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }
    

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(list[i] > list[j]){
                tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");
    printf("%d\n", list[n/2]);
    
    
}
