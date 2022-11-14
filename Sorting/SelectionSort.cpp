#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr, int n)
{   
    
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j<n; j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
        }
        swap(arr[minIdx],arr[i]);
    }
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
    vector<int> arr = {-4, -5, 5, 3, 0};
    int n = arr.size();
    selectionSort(arr, n);
    printArr(arr);
    return 0;
}