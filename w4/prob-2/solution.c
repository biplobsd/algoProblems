#include<stdio.h>

void main(){
    int n, m, mLeft=0;
    scanf("%d %d", &n, &m);

    while (n>=m)
    {   
        mLeft++;
        if(mLeft%m==0){
            n -= n/m;
        }
    }
    printf("%d\n", mLeft);

}
