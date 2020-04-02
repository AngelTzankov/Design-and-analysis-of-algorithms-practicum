#include <iostream>
#include <cstdio>
using namespace std;

int a[2000000], tmp[2000000], n;


void mergeArr(int *arr, int from, int mid, int to)
{

    int br = 0, i1 = from, i2 = mid+1;

    while(i1 <= mid && i2 <= to)
    {
        if(arr[i1] <= arr[i2])
        {
            tmp[br++] = arr[i1++];
        }
        else
        {
            tmp[br++] = arr[i2++];
        }
    }

    while(i1 <= mid)
    {
        tmp[br++] = arr[i1++];
    }
    while(i2 <= to)
    {
        tmp[br++] = arr[i2++];
    }

    for(int i=from;i<=to;++i)
    {
        arr[i] = tmp[i-from];
    }
}

void mergeSort(int *arr, int from, int to)
{
    if(from >= to)
        return ;

    int mid = (from+to)/2;

    mergeSort(arr, from, mid);
    mergeSort(arr, mid+1, to);

    mergeArr(arr, from, mid, to);
}

int main()
{
    cin>>n;
    for(int i=0;i<n;++i)
    {
        scanf("%d", &a[i]) ;
    }
    mergeSort(a, 0, n-1);
    for(int i=0;i<n;++i)
    {
        cout<<a[i]<<" ";
    }
}

