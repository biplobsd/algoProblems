#include <stdio.h>
#include <string.h>

int i, j, m, n, LCS_table[100][100];
char S1[100], S2[100], OutString[100], b[100][100];

void lcsAlgo()
{
    m = strlen(S1);
    n = strlen(S2);

    for (i = 0; i <= m; i++)
        LCS_table[i][0] = 0;
    for (i = 0; i <= n; i++)
        LCS_table[0][i] = 0;

    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
        {
            if (S1[i - 1] == S2[j - 1])
            {
                LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;
            }
            else if (LCS_table[i - 1][j] >= LCS_table[i][j - 1])
            {
                LCS_table[i][j] = LCS_table[i - 1][j];
            }
            else
            {
                LCS_table[i][j] = LCS_table[i][j - 1];
            }
        }

    int index = LCS_table[m][n];
    char lcsAlgo[index + 1];
    lcsAlgo[index] = '\0';

    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (S1[i - 1] == S2[j - 1])
        {
            lcsAlgo[index - 1] = S1[i - 1];
            i--;
            j--;
            index--;
        }

        else if (LCS_table[i - 1][j] > LCS_table[i][j - 1])
            i--;
        else
            j--;
    }

    strcpy(OutString, lcsAlgo);
}

int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 0; i < x - 1; i++)
    {
        if (i == 0)
        {
            scanf("%s", S1);
        }
        else
        {
            strcpy(S1, OutString);
        }
        scanf("%s", S2);
        lcsAlgo();
    }
    printf("%d\n%s\n", strlen(OutString), OutString);
}