#include <iostream>
#include <cstdio>
using namespace std;

int n, k, a[10000];

/// O(n)
bool check(int x)
{
    int possible = 0;
    for(int i=0;i<n;++i)
    {
        possible += a[i]/x;
    }
    return possible >= k;
}

/// O(n*log(n))
int answer(int l, int r)
{
    int lastTrue = -1;
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if( check(mid) )
        {
            lastTrue = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return lastTrue;
}

int main()
{
    int r = 0, l = 1;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;++i)
    {
        scanf("%d", &a[i]);
        if(a[i] > r)
            r = a[i];
    }
    cout<<answer(l, r)<<endl;

}
