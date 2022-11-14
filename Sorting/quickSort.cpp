#include <bits/stdc++.h>
using namespace std;

int partition(int l, int h, vector<int> &arr)
{
    int pivot = arr[l];
    int i = l+1, j = h;

    while (i <= j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[l], arr[j]);

    return j;
};

void quickSort(int l, int h, vector<int> &arr)
{
    if (l < h)
    {
        int partitionIdx;
        partitionIdx = partition(l, h, arr);
        quickSort(l, partitionIdx - 1, arr);
        quickSort(partitionIdx + 1, h, arr);
    }

    return;
}

void printArr(vector<int> &arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> arr = {5, 3, 2, -1};
    int n = arr.size();
    int l = 0, h = n - 1;
    quickSort(l, h, arr);
    printArr(arr);
    return 0;
}