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
    while (l > 0)
    {
        if (d[S[l]] == 7)
        {
            flag = 1;
            break;
        }
        l = l - d[S[l]];
    }
    return M[n];
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int d[] = {1, 2, 7, 9, 13, 25};
    coin_change_modified(d, a - b, 5);

    if (flag == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
