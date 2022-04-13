#include<stdio.h>
#include<math.h>
void main(){
    int n;
    float a, b;
    scanf("%d", &n);
    for(int x=0;x<n;x++){
        scanf("%f %f", &a, &b);
        printf("%.3f ", sqrt(pow(a, 2)+pow(b, 2)));
    }
}
