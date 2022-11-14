#include <bits/stdc++.h>
using namespace std; 
void insertionSort(vector<int> &arr , int n){
    for(int i=1; i<=n-1; i++){
        
        int key = arr[i];
        int j=i-1;
        // cout<<"arr[key] "<<arr[i]<<endl;
        while(j>=0 && arr[j]>key){
            
            arr[j+1]=arr[j];
            
            j--;
        }
        arr[j+1]=key;
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
    insertionSort(arr, n);
    printArr(arr);
    return 0;
}
