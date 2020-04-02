#include <iostream>
using namespace std;

int quickSortPartition(int *arr, int from, int to)
{
    int p1 = from, pivot = arr[to];
    for(int i = from;i <= to-1; ++i)
    {
        if(arr[i] < pivot)
        {
            swap(arr[i], arr[p1++]);
        }
    }
    swap(arr[p1], arr[to]);
    return p1;
}

void quickSort(int *arr, int from, int to)
{
    if(from >= to)
        return;

    int p = quickSortPartition(arr, from, to);

    quickSort(arr, from, p-1);
    quickSort(arr, p+1, to);
}

int main()
{
    int n, a[1000];
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    quickSort(a, 0, n-1);
    for(int i=0;i<n;++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
/*
6
5 3 2 6 4 1
*/
