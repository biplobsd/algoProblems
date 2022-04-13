#include <stdio.h>
#include <math.h>
void knapsack(int cur_w, int n, int c[], int v[])
{
    double tot_v;
    int i, maxi;
    int used[10];

    for (i = 0; i < n; ++i)
        used[i] = 0;

    while (cur_w > 0)
    {
        maxi = -1;
        for (i = 0; i < n; ++i)
            if ((used[i] == 0) &&
                ((maxi == -1) || ((float)v[i] / c[i] > (float)v[maxi] / c[maxi])))
                maxi = i;

        used[maxi] = 1;
        cur_w -= c[maxi];
        tot_v += v[maxi];
        if (cur_w <= 0)
        {
            tot_v -= v[maxi];
            tot_v += (1 + (float)cur_w / c[maxi]) * v[maxi];
        }
    }
    if (roundf(tot_v) == tot_v)
    {
        printf("%d\n", (int)tot_v);
    }
    else
    {
        printf("%.4f\n", tot_v);
    }
}

int main()
{
    int i, bagSize;
    scanf("%d", &i);
    int arrW[i], arrP[i];
    float pbyW[i], x[i];
    for (int x = 0; x < i; x++)
    {
        scanf("%d %d", &arrW[x], &arrP[x]);
        pbyW[x] = arrP[x] / arrW[x];
    }

    scanf("%d", &bagSize);
    knapsack(bagSize, i, arrW, arrP);
}
