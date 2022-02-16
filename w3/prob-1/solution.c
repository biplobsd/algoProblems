#include<stdio.h>

void main(){
    int n, tmp, x, y;
    int list[99];

    // input
    scanf("%d", &n);
    getchar();
    scanf("%d %d", &x, &y);
    getchar();
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }
    
    // Outputing 
    for (int i = x; i <= y; i++)
    {
        if(list[i]%4==0){
            printf("%d ", list[i]);
        }   
    }
    
    
}
