#include <stdio.h>

const int INF = 100000;
int flag = 0;

// k is number of denominations of the coin or length of d
int coin_change_modified(int d[], int n, int k)
{
    int M[n + 1];
    M[0] = 0;

    int S[n + 1];
    S[0] = 0;

    int i, j;
    for (j = 1; j <= n; j++)
    {
        int minimum = INF;
        int coin = 0;

        for (i = 1; i <= k; i++)
        {
            if (j >= d[i])
            {
                if ((1 + M[j - d[i]]) < minimum)
                {
                    minimum = 1 + M[j - d[i]];
                    coin = i;
                }
            }
        }
        M[j] = minimum;
        S[j] = coin;
    }

    int l = n;
    printf("%d\n", M[n]);
    int bset[k + 1];
    for (int x = 0; x <= k; x++)
    {
        bset[x] = 0;
    }
    while (l > 0)
    {
        for (int x = 0; x <= k; x++)
        {
            if (d[S[l]] == d[x])
            {
                bset[x]++;
            }
        }

        l = l - d[S[l]];
    }

    for (int x = k; x >= 0; x--)
    {
        if (bset[x] != 0)
        {
            printf("%d coins of %d\n", bset[x], d[x]);
        }
    }

    return M[n];
}

int main()
{

    int a, b, x;

    scanf("%d %d", &a, &b);

    scanf("%d", &x);

    int d[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &d[i]);
    }

    coin_change_modified(d, a - b, x - 1);

    return 0;
}