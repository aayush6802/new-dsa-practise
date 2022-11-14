#include <bits/stdc++.h>
using namespace std; 
void merge(int l,int mid, int h, vector<int> &arr){
    int i = l, k=l, j=mid+1;
    vector<int>b(arr.size());
    while(i<=mid && j<=h){
        if(arr[i]>=arr[j]){
            b[k]=arr[j];
            j++;
        }
        else{
            b[k]=arr[i];
            i++;
        }
        k++;
    }
    if(i>mid){
        while(j<=h){
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    if(j>h){
        while(i<=mid){
            b[k]=arr[i];
            i++;
            k++;
        }
    }

    for(k=l; k<=h; k++){
        arr[k]=b[k];
    }
}


void mergeSort(int l, int h, vector<int> &arr){
    if(l<h){
        int mid = (l+h)/2;
        mergeSort(l,mid,arr);
        mergeSort(mid+1,h,arr);
        merge(l,mid,h,arr);
    }
    return ;
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
    mergeSort(l, h, arr);
    printArr(arr);
    return 0;
}