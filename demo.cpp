#include <cstdio>
#include <iostream>

int kadane(int* a, int n)
{
    int c = 0, m = 0;
    for(int i=0; i<n; ++i)
    {
        if(c + a[i] > 0)
            c += a[i];
        else
            c = 0;
        if(c > m)
            m = c;
    }
    return m;
}

int main()
{
    int n = 5;

    ///problem 1
    for (int i = 1; i <= n; i++)
        printf("a");

    ///problem 2
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            printf("a");

    ///problem 3
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            printf("a");

    ///problem 4
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j += i)
            printf("a");

    ///problem 5
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i == j)
                for (int k = 1; k <= n; k++)
                    printf("a");

    ///problem 6
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j+=i)
            for (int k = 1; k <= n; k += i)
                printf("a");

}
