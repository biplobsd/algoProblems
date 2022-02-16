#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n, f=0;
    char array[50][100]; 
    char name[100];

    scanf("%d", &n);

    
    for (int i = 0; i < n; i++)
    {
        scanf("%s", array[i]);
    }

    scanf("%s", name);

    for (int i = 0; i < n; i++)
    {
        if(strcmp(name, array[i])==0){
            printf("Matched\n");
            f=1;
        }
    }
    if(f==0){
        printf("Not Matched\n");
    }
    
    
    return 0;
}
